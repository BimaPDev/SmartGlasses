/* FUN_100d68e8 @ 0x100d68e8 */

void FUN_100d68e8(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_100d6948;
  FUN_100a5b78(DAT_100d6944 | (DAT_100d693c - DAT_100d6938) * 0x20 & 0xff00U,DAT_100d694c,
               DAT_100d6940,param_1,0,param_2);
  FUN_10116500(*piVar1 + 0x50,param_1,0);
  FUN_100d3d2c(8,1);
  iVar2 = *piVar1;
  *(byte *)(iVar2 + 0xa4) = *(byte *)(iVar2 + 0xa4) | 4;
  FUN_100d6694();
  return;
}

