/* FUN_1012228a @ 0x1012228a */

undefined8 FUN_1012228a(undefined4 *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[1] << 8;
  return CONCAT44((((uint)param_1[1] >> 0x10) << 8 | (uVar1 & 0xffffff) >> 0x10) << 8 |
                  (uVar1 & 0xffff) >> 8,*param_1);
}

