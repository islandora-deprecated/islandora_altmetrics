# Islandora Altmetrics [![Build Status](https://travis-ci.org/Islandora/islandora_altmetrics.png?branch=7.x)](https://travis-ci.org/Islandora/islandora_altmetrics)

## Introduction

Islandora Altmetrics provides Altmetrics integration on citation objects as provided by [Islandora Scholar](https://github.com/Islandora/islandora_scholar).

This modules uses the [Altmetrics API](http://api.altmetric.com/). Before using this module one should familiarize oneself with the licensing.

## Requirements

This module requires the following modules/libraries:

* [Islandora](https://github.com/islandora/islandora)
* [Islandora Scholar](https://github.com/Islandora/islandora_scholar)
* [Tuque](https://github.com/islandora/tuque)

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Configuration

Configuration path is admin/islandora/tools/altmetrics (Administration > Islandora > Islander Utility Modules > Islandora Altmetrics Configuration).

There are three administration options:

* Altmetric Badge
     * provide one of the [badge types](http://api.altmetric.com/embeds.html#badge-types) defined by Altmetrics. Default is the small rectangular badges. Other options include 
* Altmetrics Popover
     * defines the location where the [popover displays](http://api.altmetric.com/embeds.html#popovers). Current options are left, right, top or bottom.
* DOI XPath
     * the XPath to the DOI element e.g. /mods:mods/mods:identifier[@type="doi"] 

![](https://raw.githubusercontent.com/wiki/dmoses/islandora_altmetrics/islandora_altmetrics_config.png)

The module provides a block, Islandora Altmetrics, that can be placed in a block region.

![](https://raw.githubusercontent.com/wiki/dmoses/islandora_altmetrics/islandora_altmetrics_block.png)

The block comes with some default configurations.

![](https://raw.githubusercontent.com/wiki/dmoses/islandora_altmetrics/islandora_altmetrics_block_config.png)

Once enabled the badge is displayed on pages that have a DOI as configured and some metrics.  If it has a DOI, but doesn't display, then the article doesn't currently have any metrics.

![](https://raw.githubusercontent.com/wiki/dmoses/islandora_altmetrics/islandora_altmetrics_display.png)

## Documentation

Further documentation for this module is available at [our wiki](https://wiki.duraspace.org/display/ISLANDORA/Islandora+Altmetrics).

## Troubleshooting/Issues

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## Maintainers/Sponsors

Current maintainers:

* [William Panting](https://github.com/willtp87)

## Development

If you would like to contribute to this module, please check out [CONTRIBUTING.md](CONTRIBUTING.md). In addition, we have helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the [Islandora.ca](http://islandora.ca) site.

## Notes

Built by [William Panting](https://github.com/willtp87) and tested by [Don Moses](https://github.com/dmoses) during the first Islandora Conference's Hackfest - August 7, 2015.

## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)
