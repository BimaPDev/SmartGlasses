/* FUN_140b3e3c @ 0x140b3e3c */

int FUN_140b3e3c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_140b3e90;
  iVar5 = 0;
  iVar7 = DAT_140b3e90;
  do {
    iVar4 = FUN_140dc518(iVar7,param_1);
    uVar3 = DAT_140b3e9c;
    uVar2 = DAT_140b3e98;
    uVar1 = DAT_140b3e94;
    iVar7 = iVar7 + 0x18;
    if (iVar4 == 0) {
      return iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 6);
  iVar7 = 0;
  do {
    iVar5 = iVar7 + 1;
    FUN_1402a6e8(4,0xab,uVar2,uVar1,uVar3,iVar7,iVar6);
    iVar6 = iVar6 + 0x18;
    iVar7 = iVar5;
  } while (iVar5 != 6);
  return -1;
}

