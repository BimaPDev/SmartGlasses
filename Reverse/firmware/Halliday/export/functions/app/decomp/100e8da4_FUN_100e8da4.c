/* FUN_100e8da4 @ 0x100e8da4 */

undefined4 FUN_100e8da4(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  FUN_100eb2a8();
  FUN_100eb2e4(param_1,param_2);
  FUN_1013ca1a(DAT_100e8e70,0,1);
  FUN_1013c856(DAT_100e8e74);
  uVar4 = 0;
  uVar2 = FUN_1011db7e(DAT_100e8e7c,0x600,DAT_100e8e78,0,0,0,5,0,0);
  FUN_10113564(uVar2,DAT_100e8e80);
  FUN_1011ea48(DAT_100e8e84,0,0x20);
  FUN_1011ea48(DAT_100e8e88,0,0x18);
  FUN_1011ea48(DAT_100e8e8c,0,0x18);
  iVar3 = FUN_10138fee();
  uVar2 = DAT_100e8e94;
  piVar1 = DAT_100e8e90;
  *DAT_100e8e90 = iVar3;
  iVar3 = FUN_10138fb6(1,iVar3 << 2,uVar2);
  *DAT_100e8e98 = iVar3;
  if (iVar3 == 0) {
    FUN_100a5b78((DAT_100e8ea0 - DAT_100e8e9c) * 0x20 & 0xff00U | 0x820011,DAT_100e8ea8,DAT_100e8ea4
                );
    uVar4 = 0xffffffff;
  }
  else {
    FUN_1011ea48(iVar3,0,*piVar1 << 2);
    *DAT_100e8eac = param_1;
    *DAT_100e8eb0 = param_2;
    uVar2 = FUN_10138ff2();
    *DAT_100e8eb4 = uVar2;
    *DAT_100e8eb8 = 1;
    uVar2 = FUN_10138fdc();
    *DAT_100e8ebc = uVar2;
  }
  return uVar4;
}

