/* FUN_2c5fa348 @ 0x2c5fa348 */

uint FUN_2c5fa348(uint param_1)

{
  uint uVar1;
  
  if ((int)param_1 < 0x80) {
    uVar1 = FUN_2c5fb9b0((int)(char)param_1);
    return uVar1;
  }
  if (param_1 == 0x80) {
    return 0;
  }
  if (param_1 - 0xa1 < 0x1f) {
    if ((int)((DAT_2c5fa520 >> (param_1 - 0xa1 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if ((param_1 & 0xffffffdf) == 0xd7) {
    return 1;
  }
  uVar1 = param_1 & 0xffffffdf;
  if (param_1 - 0x2c2 < 4) {
    return 1;
  }
  if (param_1 - 0x2d2 < 0x1c) {
    if ((int)((DAT_2c5fa52c >> (param_1 - 0x2d2 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if (param_1 - 0x2ef < 0x11) {
    return 1;
  }
  if (param_1 - 0x375 < 0x13) {
    if ((int)((DAT_2c5fa524 >> (param_1 - 0x375 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x3f6) {
      return 1;
    }
    if (param_1 == 0x482) {
      return 1;
    }
  }
  if (param_1 - 0x55a < 6) {
    return 1;
  }
  if (param_1 - 0x589 < 2) {
    return 1;
  }
  if (param_1 - 0x58d < 3) {
    return 1;
  }
  if (param_1 - 0x5be < 9) {
    if ((int)((0x125U >> (param_1 - 0x5be & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if (param_1 - 0x5f3 < 2) {
    return 1;
  }
  if (param_1 - 0x606 < 0x1a) {
    if ((int)((DAT_2c5fb4d4 >> (param_1 - 0x606 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if (param_1 - 0x66a < 4) {
    return 1;
  }
  if (param_1 - 0x6d4 < 0x16) {
    if ((int)((DAT_2c5fb4d0 >> (param_1 - 0x6d4 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if (param_1 - 0x6fd < 2) {
    return 1;
  }
  if (param_1 - 0x700 < 0xe) {
    return 1;
  }
  if (param_1 - 0x7f6 < 4) {
    return 1;
  }
  if (param_1 - 0x7fe < 2) {
    return 1;
  }
  if (param_1 - 0x830 < 0xf) {
    return 1;
  }
  if (param_1 == 0x85e) {
    return 1;
  }
  if (param_1 == 0x888) {
    return 1;
  }
  if (param_1 - 0x964 < 2) {
    return 1;
  }
  if ((param_1 & 0xfffffdff) == 0x970) {
    return 1;
  }
  if ((param_1 & 0xfffffff6) == 0x9f2) {
    return 1;
  }
  if (param_1 == 0x9fd) {
    return 1;
  }
  if (param_1 == 0xa76) {
    return 1;
  }
  if (param_1 - 0xaf0 < 2) {
    return 1;
  }
  if (param_1 - 0xbf3 < 8) {
    return 1;
  }
  if ((param_1 & 0xfffffff7) == 0xc77) {
    return 1;
  }
  if ((param_1 == 0xc84) || (param_1 == 0xd4f)) {
    return 1;
  }
  if ((param_1 == 0xd79) || (param_1 == 0xdf4)) {
    return 1;
  }
  if (param_1 - 0xe3f < 0x1d) {
    if ((int)((DAT_2c5fa528 >> (param_1 - 0xe3f & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if (param_1 - 0xf01 < 0x17) {
    return 1;
  }
  if (param_1 - 0xf1a < 0x1f) {
    if ((int)((DAT_2c5fb4cc >> (param_1 - 0xf1a & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if ((param_1 - 0xf3a < 4) || (param_1 == 0xf85)) {
    return 1;
  }
  if (param_1 - 0xfbe < 0x1d) {
    if ((int)((DAT_2c5fa830 >> (param_1 - 0xfbe & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if (DAT_2c5fa530 + param_1 < 6) {
    return 1;
  }
  if ((DAT_2c5fa7a4 + param_1 < 2) || (param_1 == 0x10fb)) {
    return 1;
  }
  if (param_1 - 0x1360 < 9) {
    return 1;
  }
  if ((DAT_2c5fa7a8 + param_1 < 10) || (param_1 == 0x1400)) {
    return 1;
  }
  if (DAT_2c5fa7ac + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5fa7b0 + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5fa7b4 + param_1 < 3) {
    return 1;
  }
  if (DAT_2c5fa7b8 + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5fa7bc + param_1 < 3) {
    return 1;
  }
  if (DAT_2c5fa7c0 + param_1 < 4) {
    return 1;
  }
  if ((param_1 - 0x1800 < 0xb) || (param_1 == 0x1940)) {
    return 1;
  }
  if (DAT_2c5fa7c4 + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5fa7c8 + param_1 < 0x22) {
    return 1;
  }
  if (DAT_2c5fa7cc + param_1 < 2) {
    return 1;
  }
  if (param_1 - 0x1aa0 < 7) {
    return 1;
  }
  if (DAT_2c5fa7d0 + param_1 < 6) {
    return 1;
  }
  if (DAT_2c5fa7d4 + param_1 < 0x11) {
    return 1;
  }
  if (DAT_2c5fa7d8 + param_1 < 0xb) {
    return 1;
  }
  if (DAT_2c5fa7dc + param_1 < 4) {
    return 1;
  }
  if (DAT_2c5fa7e0 + param_1 < 5) {
    return 1;
  }
  if (DAT_2c5fa7e4 + param_1 < 2) {
    return 1;
  }
  if (param_1 - 0x1cc0 < 8) {
    return 1;
  }
  if ((param_1 == 0x1cd3) || (param_1 == 0x1fbd)) {
    return 1;
  }
  if (DAT_2c5fa7e8 + param_1 < 3) {
    return 1;
  }
  if (DAT_2c5fa7ec + (param_1 & 0xffffffef) < 3) {
    return 1;
  }
  if (DAT_2c5fa7f0 + param_1 < 3) {
    return 1;
  }
  if (DAT_2c5fa7f4 + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5fa7f8 + param_1 < 0x18) {
    return 1;
  }
  if (DAT_2c5fa7fc + param_1 < 0x2f) {
    return 1;
  }
  if (DAT_2c5fa800 + param_1 < 5) {
    return 1;
  }
  if (DAT_2c5fa804 + param_1 < 5) {
    return 1;
  }
  if (DAT_2c5fa808 + param_1 < 0x21) {
    return 1;
  }
  if (param_1 - 0x2100 < 0x19) {
    if ((int)((DAT_2c5fb454 >> (param_1 - 0x2100 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
LAB_2c5fb394:
    if (param_1 - 0x2140 < 0x10) {
      if ((int)((0xbc1fU >> (param_1 - 0x2140 & 0xff)) << 0x1f) < 0) {
        return 1;
      }
      goto LAB_2c5fa6bc;
    }
  }
  else {
    if (0x1d < DAT_2c5fa80c + param_1) goto LAB_2c5fb394;
    if ((int)((DAT_2c5fa810 >> (DAT_2c5fa80c + param_1 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  if (DAT_2c5fa814 + param_1 < 2) {
    return 1;
  }
LAB_2c5fa6bc:
  if (DAT_2c5fa818 + param_1 < 0x297) {
    return 1;
  }
  if (param_1 - 0x2440 < 0xb) {
    return 1;
  }
  if (DAT_2c5fa81c + param_1 < 0x4e) {
    return 1;
  }
  if (param_1 - 0x2500 < 0x276) {
    return 1;
  }
  if (DAT_2c5fa820 + param_1 < 0x3e0) {
    return 1;
  }
  if (DAT_2c5fa824 + param_1 < 0x20) {
    return 1;
  }
  if (DAT_2c5fa828 + param_1 < 0x69) {
    return 1;
  }
  if (DAT_2c5fa82c + param_1 < 0x1b) {
    if ((int)((DAT_2c5fb450 >> (DAT_2c5fa82c + param_1 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else if (param_1 == 0x2d70) {
    return 1;
  }
  if (param_1 - 0x2e00 < 0x2f) {
    return 1;
  }
  if (DAT_2c5fa834 + param_1 < 0x2e) {
    return 1;
  }
  if (param_1 - 0x2e80 < 0x1a) {
    return 1;
  }
  if (DAT_2c5fa838 + param_1 < 0x59) {
    return 1;
  }
  if (param_1 - 0x2f00 < 0xd6) {
    return 1;
  }
  if (DAT_2c5fa83c + param_1 < 0xc) {
    return 1;
  }
  if (param_1 - 0x3001 < 4) {
    return 1;
  }
  if (DAT_2c5fa840 + param_1 < 0x10) {
    if (((int)((0xe0c1U >> (DAT_2c5fa840 + param_1 & 0xff)) << 0x1f) < 0) ||
       (DAT_2c5fa844 + param_1 < 0x19)) {
      return 1;
    }
  }
  else {
    if (DAT_2c5fa844 + param_1 < 0x19) {
      return 1;
    }
    if (DAT_2c5faaac + param_1 < 2) {
      return 1;
    }
    if ((param_1 == 0x30a0) || (param_1 == 0x30fb)) {
      return 1;
    }
  }
  if (DAT_2c5faab0 + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5faab4 + param_1 < 10) {
    return 1;
  }
  if (param_1 - 0x31c0 < 0x24) {
    return 1;
  }
  if (param_1 - 0x3200 < 0x1f) {
    return 1;
  }
  if ((DAT_2c5faab8 + param_1 < 0x1e) || (param_1 == 0x3250)) {
    return 1;
  }
  if (DAT_2c5faabc + param_1 < 0x20) {
    return 1;
  }
  if (DAT_2c5faac0 + param_1 < 0x27) {
    return 1;
  }
  if (param_1 - 0x32c0 < 0x140) {
    return 1;
  }
  if (DAT_2c5faac4 + param_1 < 0x40) {
    return 1;
  }
  if (DAT_2c5faac8 + param_1 < 0x37) {
    return 1;
  }
  if (DAT_2c5faacc + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5faad0 + param_1 < 3) {
    return 1;
  }
  if ((param_1 == 0xa673) || (param_1 == 0xa67e)) {
    return 1;
  }
  if (DAT_2c5faad4 + param_1 < 6) {
    return 1;
  }
  if (param_1 - 0xa700 < 0x17) {
    return 1;
  }
  if (DAT_2c5faad8 + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5faadc + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5faae0 + param_1 < 4) {
    return 1;
  }
  if (DAT_2c5faae4 + param_1 < 4) {
    return 1;
  }
  if (DAT_2c5faae8 + param_1 < 4) {
    return 1;
  }
  if (DAT_2c5faaec + param_1 < 2) {
    return 1;
  }
  if ((DAT_2c5faaf0 + param_1 < 3) || (param_1 == 0xa8fc)) {
    return 1;
  }
  if ((DAT_2c5faaf4 + param_1 < 2) || (param_1 == 0xa95f)) {
    return 1;
  }
  if (DAT_2c5faaf8 + param_1 < 0xd) {
    return 1;
  }
  if (DAT_2c5faafc + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5fab00 + param_1 < 4) {
    return 1;
  }
  if (DAT_2c5fab04 + param_1 < 3) {
    return 1;
  }
  if (DAT_2c5fab08 + param_1 < 2) {
    return 1;
  }
  if ((DAT_2c5fab0c + param_1 < 2) || (param_1 == 0xab5b)) {
    return 1;
  }
  if (DAT_2c5fab10 + param_1 < 2) {
    return 1;
  }
  if ((param_1 == 0xabeb) || (param_1 == 0xfb29)) {
    return 1;
  }
  if (DAT_2c5fab14 + param_1 < 0x11) {
    return 1;
  }
  if ((DAT_2c5fab18 + param_1 < 0x12) || (param_1 == 0xfdcf)) {
    return 1;
  }
  if (DAT_2c5fab1c + param_1 < 4) {
    return 1;
  }
  if (DAT_2c5fab20 + param_1 < 10) {
    return 1;
  }
  if (DAT_2c5fab24 + param_1 < 0x23) {
    return 1;
  }
  if (DAT_2c5fab28 + param_1 < 0x13) {
    return 1;
  }
  if (DAT_2c5fab2c + param_1 < 4) {
    return 1;
  }
  if (param_1 - 0xff01 < 0xf) {
    return 1;
  }
  if (DAT_2c5fab30 + param_1 < 7) {
    return 1;
  }
  if (DAT_2c5fab34 + param_1 < 6) {
    return 1;
  }
  if (DAT_2c5fab38 + param_1 < 0xb) {
    return 1;
  }
  if (DAT_2c5fab3c + (param_1 & 0xfffffff7) < 7) {
    return 1;
  }
  if (DAT_2c5fab40 + param_1 < 2) {
    return 1;
  }
  if (DAT_2c5fab44 + param_1 < 3) {
    return 1;
  }
  if (DAT_2c5fab48 + param_1 < 9) {
    return 1;
  }
  if (DAT_2c5fab4c + param_1 < 0x11) {
    return 1;
  }
  if (DAT_2c5fab50 + param_1 < 0x15) {
    if ((int)((DAT_2c5fb44c >> (DAT_2c5fab50 + param_1 & 0xff)) << 0x1f) < 0) {
      return 1;
    }
  }
  else {
    if (DAT_2c5fab54 + param_1 < 0x2d) {
      return 1;
    }
    if ((param_1 == DAT_2c5fac50) || (param_1 == DAT_2c5fac50 + 0x31)) {
      return 1;
    }
  }
  if ((param_1 == DAT_2c5fac54) || (param_1 == DAT_2c5fac54 + 0x2e8)) {
    return 1;
  }
  if (DAT_2c5fac58 + param_1 < 2) {
    return 1;
  }
  if (uVar1 != DAT_2c5fac5c) {
    if (DAT_2c5fac60 + param_1 < 9) {
      return 1;
    }
    if ((param_1 == DAT_2c5fac64) || (param_1 == DAT_2c5fac64 + 0x49)) {
      return 1;
    }
    if (DAT_2c5fac68 + param_1 < 7) {
      return 1;
    }
    if (DAT_2c5fac6c + param_1 < 7) {
      return 1;
    }
    if ((DAT_2c5fac70 + param_1 < 4) || (param_1 == DAT_2c5fac74)) {
      return 1;
    }
    if (DAT_2c5fac78 + param_1 < 5) {
      return 1;
    }
    if (DAT_2c5fac7c + param_1 < 4) {
      return 1;
    }
    if (DAT_2c5fac80 + param_1 < 7) {
      return 1;
    }
    if (DAT_2c5fac84 + param_1 < 2) {
      return 1;
    }
    if (DAT_2c5fac88 + param_1 < 4) {
      return 1;
    }
    if (DAT_2c5fac8c + param_1 < 4) {
      return 1;
    }
    if (DAT_2c5fac90 + param_1 < 2) {
      return 1;
    }
    if (DAT_2c5fac94 + param_1 < 0x1b) {
      if ((int)((DAT_2c5faca0 >> (DAT_2c5fac94 + param_1 & 0xff)) << 0x1f) < 0) {
        return 1;
      }
    }
    else if ((DAT_2c5fac98 + param_1 < 6) || (param_1 == DAT_2c5fac9c)) {
      return 1;
    }
    if (DAT_2c5faca4 + param_1 < 0x13) {
      if ((int)((DAT_2c5fb444 >> (DAT_2c5faca4 + param_1 & 0xff)) << 0x1f) < 0) {
        return 1;
      }
    }
    else if (param_1 == DAT_2c5faca8) {
      return 1;
    }
    if (DAT_2c5faf88 + param_1 < 0x17) {
      return 1;
    }
    if (DAT_2c5faf8c + param_1 < 3) {
      return 1;
    }
    if ((DAT_2c5faf90 + param_1 < 0xd) || (param_1 == DAT_2c5faf94)) {
      return 1;
    }
    if ((DAT_2c5faf98 + param_1 < 4) || (param_1 == DAT_2c5faf9c)) {
      return 1;
    }
    if ((DAT_2c5fafa0 + param_1 < 3) || (param_1 == DAT_2c5fafa4)) {
      return 1;
    }
    if (DAT_2c5fafa8 + param_1 < 8) {
      return 1;
    }
    if (DAT_2c5fafac + param_1 < 3) {
      return 1;
    }
    if (DAT_2c5fafb0 + param_1 < 5) {
      return 1;
    }
    if (DAT_2c5fafb4 + param_1 < 10) {
      return 1;
    }
    if (DAT_2c5fafb8 + param_1 < 5) {
      return 1;
    }
    if (DAT_2c5fafbc + param_1 < 2) {
      return 1;
    }
    if (DAT_2c5fafc0 + param_1 < 2) {
      return 1;
    }
    if (DAT_2c5fafc4 + param_1 < 0xd) {
      return 1;
    }
    if ((DAT_2c5fafc8 + param_1 < 0x1d) || (param_1 == DAT_2c5fafcc)) {
      return 1;
    }
    if (DAT_2c5fafd0 + param_1 < 5) {
      return 1;
    }
    if (DAT_2c5fafd4 + param_1 < 2) {
      return 1;
    }
    if ((DAT_2c5fafd8 + param_1 < 2) || (param_1 == DAT_2c5fafdc)) {
      return 1;
    }
    if (DAT_2c5fafe0 + param_1 < 9) {
      return 1;
    }
    if (DAT_2c5fafe4 + param_1 < 2) {
      return 1;
    }
    if (DAT_2c5fafe8 + param_1 < 4) {
      return 1;
    }
    if ((param_1 == DAT_2c5faff0 || param_1 == DAT_2c5fafec) || (param_1 == DAT_2c5faff0 + 3)) {
      return 1;
    }
    if (DAT_2c5faff4 + param_1 < 0x74) {
      return 1;
    }
    if (param_1 - 0x1d000 < 0xf6) {
      return 1;
    }
    if (DAT_2c5faff8 + param_1 < 0x27) {
      return 1;
    }
    if (DAT_2c5faffc + param_1 < 0x3c) {
      return 1;
    }
    if (DAT_2c5fb000 + param_1 < 3) {
      return 1;
    }
    if (DAT_2c5fb004 + param_1 < 2) {
      return 1;
    }
    if (DAT_2c5fb008 + param_1 < 0x1e) {
      return 1;
    }
    if (DAT_2c5fb00c + param_1 < 0x3d) {
      return 1;
    }
    if ((param_1 - 0x1d200 < 0x42) || (param_1 == DAT_2c5fb010)) {
      return 1;
    }
    if (DAT_2c5fb014 + param_1 < 0x57) {
      return 1;
    }
    if ((param_1 == DAT_2c5fb018) || (uVar1 == DAT_2c5fb018 + 0x1a)) {
      return 1;
    }
    if (uVar1 == DAT_2c5fb018 + 0x54) {
      return 1;
    }
    if (uVar1 == DAT_2c5fb018 + 0x8e) {
      return 1;
    }
    if (uVar1 == DAT_2c5fb018 + 200) {
      return 1;
    }
    if (param_1 == DAT_2c5fb01c) {
      return 1;
    }
    if (param_1 - 0x1d800 < 0x200) {
      return 1;
    }
    if (DAT_2c5fb020 + param_1 < 4) {
      return 1;
    }
    if (DAT_2c5fb024 + param_1 < 0x1f) {
      if ((int)((DAT_2c5fb448 >> (DAT_2c5fb024 + param_1 & 0xff)) << 0x1f) < 0) {
        return 1;
      }
    }
    else if ((param_1 == DAT_2c5fb028) || (param_1 == DAT_2c5fb028 + 0x1b0)) {
      return 1;
    }
    if (DAT_2c5fb02c + param_1 < 2) {
      return 1;
    }
    if ((param_1 == DAT_2c5fb034 || param_1 == DAT_2c5fb030) || (param_1 == DAT_2c5fb034 + 0x7e)) {
      return 1;
    }
    if (DAT_2c5fb038 + param_1 < 2) {
      return 1;
    }
    if (param_1 - 0x1f000 < 0x2c) {
      return 1;
    }
    if (DAT_2c5fb03c + param_1 < 100) {
      return 1;
    }
    if (0xe < DAT_2c5fb040 + param_1) {
      if (DAT_2c5fb044 + param_1 < 0xf) {
        return 1;
      }
      if (DAT_2c5fb048 + param_1 < 0xf) {
        return 1;
      }
      if (DAT_2c5fb04c + param_1 < 0x25) {
        return 1;
      }
      if (DAT_2c5fb050 + param_1 < 0xa1) {
        return 1;
      }
      if (DAT_2c5fb054 + param_1 < 0x1d) {
        return 1;
      }
      if (DAT_2c5fb058 + param_1 < 0x2c) {
        return 1;
      }
      if (DAT_2c5fb05c + param_1 < 9) {
        return 1;
      }
      if (DAT_2c5fb060 + param_1 < 2) {
        return 1;
      }
      if (DAT_2c5fb064 + param_1 < 6) {
        return 1;
      }
      if (DAT_2c5fb068 + param_1 < 0x3d8) {
        return 1;
      }
      if (DAT_2c5fb06c + param_1 < 0x11) {
        return 1;
      }
      if (DAT_2c5fb070 + param_1 < 0xd) {
        return 1;
      }
      if (DAT_2c5fb074 + param_1 < 0x77) {
        return 1;
      }
      if (DAT_2c5fb078 + param_1 < 0x5f) {
        return 1;
      }
      if ((DAT_2c5fb07c + param_1 < 0xc) || (param_1 == DAT_2c5fb080)) {
        return 1;
      }
      if (param_1 - 0x1f800 < 0xc) {
        return 1;
      }
      if (0x37 < DAT_2c5fb084 + param_1) {
        if (DAT_2c5fb088 + param_1 < 10) {
          return 1;
        }
        if (DAT_2c5fb410 + param_1 < 0x28) {
          return 1;
        }
        if (DAT_2c5fb414 + param_1 < 0x1e) {
          return 1;
        }
        if (DAT_2c5fb418 + param_1 < 2) {
          return 1;
        }
        if (DAT_2c5fb41c + param_1 < 0x154) {
          return 1;
        }
        if (DAT_2c5fb420 + param_1 < 0xe) {
          return 1;
        }
        if (DAT_2c5fb424 + param_1 < 0xd) {
          return 1;
        }
        if (8 < DAT_2c5fb428 + param_1) {
          if (DAT_2c5fb42c + param_1 < 0x2e) {
            return 1;
          }
          if (DAT_2c5fb430 + param_1 < 7) {
            return 1;
          }
          if (DAT_2c5fb434 + param_1 < 0xe) {
            return 1;
          }
          if (8 < DAT_2c5fb438 + (param_1 & 0xffffffef)) {
            if (0x92 < DAT_2c5fb43c + param_1) {
              return (uint)(DAT_2c5fb440 + param_1 < 0x37);
            }
            return 1;
          }
          return 1;
        }
        return 1;
      }
      return 1;
    }
    return 1;
  }
  return 1;
}

