# Lightweight Embedded Speech Synthesizer
Lightweight Embedded Speech Synthesizer (LESS) is retro-sounding speech synthesizer inspired by
technology of the 1980s-1990s. It's designed to be used everywhere from microcontrollers all the way
up to desktop PCs.

The voice is male-sounding, extremely crunchy and overall very retro (so don't come
expecting Google WaveNet on your microcontroller!) Current plan is to just implement phoneme-to-speech, 
eventually may include full text-to-speech. Also possibly will make a VST plugin.

**Project status:** Unfortunately, I am extremely busy with other projects, and don't have that much time
to work on this. So, it'll be done soon(TM)

## Background (some personal info)
I became interested in retro-sounding speech synthesis after purchasing a SpeakJet from SparkFun. It's
basically a speech synthesizer programmed onto a dsPIC, and it has a lovely retro sound that I found
very appealing. Unfortunately, this chip is overpriced and not produced anymore (afaik). To make
matters worse, because I am incredibly dumb, I accidentally fried it by reversing the polarity.

Anyway, after I cooked my SpeakJet, I looked into software retro speech synthesizers, quickly
coming across the Chipspeech plugin and all the sounds featured in there. I thought it might be cool to attempt
to make my own. As an embedded systems developer, the concept of a speech synthesizer you can 

Unfortunately, Chipspeech is closed source and the SpeakJet's documentation
about its internal workings are essentially non-existent. Upon hearing the STSPEECH program for the 
Atari ST (in Chipspeech, it's called "Rotten ST"), I decided that I was going to try to build a similar 
sounding synthesizer to that, from scratch.

## Building and running
LESS comes in two parts: a Linux test-bench, and the actual library code you can copy into your
own project.

**To embed LESS in your own project,** (TODO)

**To run the test-bench,** use the CMakeLists.txt and compile and run main.c. The testbench requires
(TODO dependencies, probably libsndfile and/or portaudio; and libogg)

### Embedded systems notes
- I won't make many assumptions about your system. Ideally this should be compatible with any RTOS,
but I will only test FreeRTOS.
- You can replace your malloc, free and calloc in less.h

## Licence
Mozilla Public Licence v2.0