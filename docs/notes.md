# Notes
Notes about various things related to this project, mostly links.

Sources may not be good (in fact, they may be terrible), it's mostly just stuff I could find
quickly and need to read later.

## DSP
### Oscillators
- https://en.wikipedia.org/wiki/Sawtooth_wave
- https://github.com/rcliftonharvey/rchoscillators
- Audacity (sawtooth): https://github.com/audacity/audacity/blob/master/src/effects/ToneGen.cpp#L229
- https://docs.scipy.org/doc/scipy/reference/generated/scipy.signal.sawtooth.html

### Filters
- https://au.mathworks.com/help/dsp/ug/code-generation-for-parametric-audio-equalizer.html
- https://stackoverflow.com/questions/12093594/how-to-implement-band-pass-butterworth-filter-with-scipy-signal-butter
- https://docs.scipy.org/doc/scipy/reference/generated/scipy.signal.butter.html
- https://docs.scipy.org/doc/scipy/reference/generated/scipy.signal.iirdesign.html

## Speech
### Formants
- https://en.wikipedia.org/wiki/Formant
- https://www.researchgate.net/figure/Formant-frequencies-for-English-vowels-for-RTH-in-Hz_tbl2_277835798

### Synthesis
- https://www.soundonsound.com/techniques/formant-synthesi
- https://archive.org/details/HEROTALK/mode/2up

## Prior art
Refers to entire programs. Most do not use the technique we are going to use.

- espeak-ng: https://github.com/espeak-ng/espeak-ng
  - https://github.com/espeak-ng/espeak-ng/blob/master/src/libespeak-ng/wavegen.c
  - https://github.com/espeak-ng/espeak-ng/blob/master/src/libespeak-ng/klatt.c
  - https://github.com/espeak-ng/espeak-ng/blob/master/src/libespeak-ng/speech.c
  - https://github.com/espeak-ng/espeak-ng/blob/master/src/libespeak-ng/synthesize.c
  - https://en.wikipedia.org/wiki/ESpeak
- mbrola: https://github.com/numediart/MBROLA
  - https://github.com/numediart/MBROLA/blob/master/Engine/mbrola.c
- TODO SAM typescript port thing
- https://github.com/trcwm/Speech256