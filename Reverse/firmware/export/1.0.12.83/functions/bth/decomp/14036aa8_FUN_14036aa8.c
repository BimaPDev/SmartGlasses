/* FUN_14036aa8 @ 0x14036aa8 */

void FUN_14036aa8(uint *param_1,uint param_2,uint param_3)

{
  *(uint *)(DAT_14036b0c + 0x250) = *(uint *)(DAT_14036b0c + 0x250) & 0x7fffffff;
  *param_1 = param_2 & 0x3fff | *param_1 & 0xffffc000;
  *param_1 = *param_1 & 0xc000ffff | (param_3 & 0x3fff) << 0x10;
  return;
}

