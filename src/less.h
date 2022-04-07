// This file is part of LESS, the Lightweight Embedded Speech Synthesiser.
// Copyright (c) 2022 Matt Young. All rights reserved.
//
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this file,
// You can obtain one at http://mozilla.org/MPL/2.0/.
#pragma once
#include <stdint.h>
#include <stdlib.h>

/// Sample in LESS output buffer
typedef uint16_t LessSample_t;

/// Output sink function: grab a buffer of samples and write them to your audio device
/// First parameter: array of sample types
/// Second parameter: number of samples in the array
typedef void(*LessOutputSink_t)(const LessSample_t*,size_t);

/// Main speech synthesizer object. All members are private.
typedef struct {
    uint16_t curPos;
} Less_t;

typedef enum {
    LPHONEME_TEST = 0,
} LessPhoneme_t;

// Memory functions, may be useful to redefine if you have a custom allocator (e.g. FreeRTOS heap)
#define LESS_MALLOC(x) malloc(x)
#define LESS_FREE(x) free(x)
#define LESS_CALLOC(x,y) calloc(x,y)

/**
 * Initialises the speech synthesizer.
 * @param sink output sink function
 * @returns allocated LESS instance, must be freed by user
 */
Less_t *lessInit(LessOutputSink_t sink);

/**
 * Synthesizes the given phonemes. Output will be sent to the output sink.
 * @param less less instance
 * @param phonemes list of phonemes
 * @param count number of phonemes in the provided list
 */
void lessSynthesize(Less_t *less, const LessPhoneme_t *phonemes, size_t count);

/**
 * Frees and shuts down LESS.
 * @param less LESS instance to be freed
 */
void lessFree(Less_t *less);