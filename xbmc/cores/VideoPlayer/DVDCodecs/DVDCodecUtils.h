/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "Video/DVDVideoCodec.h"

class CDVDCodecUtils
{
public:
  static bool IsVP3CompatibleWidth(int width);
  static double NormalizeFrameduration(double frameduration, bool *match = NULL);
};

