# Audio_JQ8400
Provides a basic Arduino library to control a JQ8400 Modul.

## Table of Contents

1. [Audio_JQ8400](#Audio_JQ8400)
2. [Table of Contents](#table-of-contents)
3. [Summary](#summary)
4. [Installation](#installation)
5. [Usage](#usage)
6. [Enumerations](#enumerations)
7. [Methods](#methods)
      - [Audio_JQ8400()](#methods)
      - [void setVolume(uint8_t vol)](#methods)
      - [void setEQ(EQMode eq)](#methods)
      - [void playIndex(uint16_t idx)](#methods)
      - [void playNext()](#methods)
8. [Contributing](#contributing)
9. [License](#license)
<snippet>
<content>

## Summary

Basically control a JQ8400 module.

## Installation

To use this library download the zip file, uncompress it to a folder named Audio_JQ8400. Move the folder to {Arduino Path}/libraries.

## Usage

Include the library at the top of your Arduino script. `#include <Audio_JQ8400.h>`
Create a global or local variable. `Audio_JQ8400 ajq;`
In your start up you might call `ajq.setVolume(X)` or `ajq.setEQ(Audio_JQ8400::EQ_Normal)`.

## Enumerations
#### EQMode Enum
   * EQ_Normal
   * EQ_POP
   * EQ_Rock
   * EQ_Jazz
   * EQ_Classic

## Methods

#### Audio_JQ8400()

  Constructor used to create the Audio_JQ8400 class. 

#### void setVolume(uint8_t vol)

  Method used to set the output volume of the module. Values range from 0 (silent) to 30.
 
#### void setEQ(EQMode eq)

  Set the output audio equilizer. One of 5 modes see enum EQMode.

#### void playIndex(uint16_t idx)

  Start playing file number idx.

#### void playNext()

  Play the next file.

## Contributing

1. Fork the project.
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request.

## License

GNU GPL, see License.txt
</content>
</snippet>
