/* FUN_2c47bcb6 @ 0x2c47bcb6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_2c47bcb6(uint *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (*param_4 == '\0') {
    return (uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
           uVar1 >> 0x18) == _LAB_2c47bcfc;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,300,_LAB_2c47bd0c,_LAB_2c47bd08,_LAB_2c47bd04,_LAB_2c47bd00,(char)*param_1,
        *(undefined1 *)((int)param_1 + 1),*(undefined1 *)((int)param_1 + 2),
        *(undefined1 *)((int)param_1 + 3));
}

