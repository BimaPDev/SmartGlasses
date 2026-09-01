/* FUN_100ccc60 @ 0x100ccc60 */

void FUN_100ccc60(undefined4 param_1,uint param_2,ushort *param_3,int param_4)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = DAT_100cccac;
  uVar2 = DAT_100ccca4;
  uVar4 = DAT_100ccca8;
  iVar5 = param_4;
  while( true ) {
    if (uVar2 < uVar4) {
      FUN_10119dc2(DAT_100cccb4,DAT_100cccb0,uVar3,0x473,param_1,param_2,param_3,param_4,iVar5);
      FUN_10119dc2(DAT_100cccb8);
      param_1 = FUN_1011a1f0(uVar3,0x473,param_3,param_4);
    }
    param_3 = DAT_100cccbc;
    if (uVar2 <= uVar4) break;
    piVar1 = (int *)(uVar4 + 4);
    param_2 = (uint)*DAT_100cccbc;
    uVar4 = uVar4 + 8;
    param_4 = *piVar1 + param_2;
    *DAT_100cccbc = (ushort)param_4;
  }
  return;
}

