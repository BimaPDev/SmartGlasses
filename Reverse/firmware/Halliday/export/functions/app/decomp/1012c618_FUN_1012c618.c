/* FUN_1012c618 @ 0x1012c618 */

uint FUN_1012c618(uint param_1)

{
  return ((int)(((param_1 & 0xffff) >> 0xb) * 0x107 + 7) >> 5 & 0xffU) << 0x10 |
         ((int)(((param_1 & 0x7ff) >> 5) * 0x103 + 3) >> 6 & 0xffU) << 8 |
         (int)((param_1 & 0x1f) * 0x107 + 7) >> 5 & 0xffU | 0xff000000;
}

