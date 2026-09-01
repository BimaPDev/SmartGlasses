/* FUN_100e8b74 @ 0x100e8b74 */

uint FUN_100e8b74(uint param_1)

{
  return (param_1 & 0xff) >> 3 | DAT_100e8b8c & param_1 >> 8 | param_1 >> 5 & 0x7e0;
}

