# Lightweight Embedded Speech Synthesizer
Lightweight Embedded Speech Synthesizer (LESS) is a relatively simple retro-sounding speech synthesizer written in C11.
It's inspired by retro speech synthesizers from the 1980s-1990s, in the likes of the Software Automatic Mouth and the
STSPEECH.TOS program for the Atari 520ST.

LESS is designed to be easily portable, lightweight and straightforward to understand. In that regard, the API will be designed
such that you just provide LESS with a list of phonemes to pronounce and it will return a raw audio buffer. However, 
I aim to eventually provide a text-to-phoneme converter so that you can just pronounce a text buffer, and also possibly a
VST plugin that uses LESS as its backend.

## Background (some personal info)
I initially wanted to make a speech synthesizer as far back as 2017, after learning about the awesome Chipspeech plugin
from Plogue and the SpeakJet device from MagnaVox. Unfortunately, Chipspeech is closed source and the SpeakJet's documentation
about its internal workings are essentially non-existent. Upon hearing the STSPEECH program for the Atari ST, I decided that
I was going to try to build a similar sounding synthesizer to that.

Resources around the program are extremely difficult to find (see RESOURCES.md for some info), however I was eventually
able to obtain a copy of it, along with some possibly related assembly source code, along with a Windows emulator for the
program. Not knowing much 68000 assembly, I decided to do some basic reverse engineering of the emulator and discovered
it was actually created by Stefan Stenzel of Waldorf Music. Upon doing some more research, it turns out that out one point
in time Stefan actually had a copy of the original C source code to the program, but after contacting him on Twitter, he
was unable to open source it due to agreements.

So, with my reverse engineering skills being terrible, I decided it was a good time to try and implement my own
formant speech synthesizer. Unfortunately, this is far from an easy task and hence why this will take so long to create.

## Design
**TODO early stages**

Based on: https://www.soundonsound.com/techniques/formant-synthesis and this masters thesis: https://archive.org/details/HEROTALK/mode/2up

For vowels:

Square wave -> Parallel band pass filters -> Mixer -> Amplify/Distort -> Output

For consonants:

Noise -> ADSR -> Output

### Considerations/problems
- Bandpass filters are obscenely complicated