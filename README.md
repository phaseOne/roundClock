roundClock
==========

A twist on the traditional analogue clock created by [Evan Bovie](https://github.com/phaseOne).

A widget for [Übersicht](http://tracesof.net/uebersicht/).

![](screenshot.jpg)

## Options

Options by [Joe Creighton](https://github.com/joecreighton).

Set the appropriate variables at the top of `index.coffee`.  By default, the `seconds` indicators (digits and hand marker) are both visible (`true`) while the time is presented in a 24-hour format (`milTime` or military time); if the 12-hour format is chosen instead, you have the option to hide or show the am/pm indicator.

  ```
  appearance =
    secDigit: true
    secHand : true
    milTime : true
    showAMPM: false
  ```

## License

* [Mozilla Public License 2.0](https://www.mozilla.org/MPL/2.0/)
