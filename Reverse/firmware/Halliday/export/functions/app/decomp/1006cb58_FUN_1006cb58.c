/* FUN_1006cb58 @ 0x1006cb58 */

int FUN_1006cb58(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 local_1c [2];
  
  iVar1 = FUN_10113464(DAT_1006cba8,local_1c,0,0);
  if (iVar1 == 0) {
    FUN_1011ea48(local_1c[0],0,0x50);
    *param_1 = local_1c[0];
    uVar2 = FUN_10123024(local_1c[0],param_2 + 1,param_3,param_4,0x13);
    if (uVar2 < 0x14) {
      iVar1 = (int)*(char *)(DAT_1006cbac + uVar2);
    }
    else {
      iVar1 = -5;
    }
  }
  else {
    iVar1 = -0xc;
  }
  return iVar1;
}

