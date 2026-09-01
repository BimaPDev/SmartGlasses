/* FUN_100dc23c @ 0x100dc23c */

undefined4 FUN_100dc23c(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_1c;
  
  iVar4 = param_1;
  iVar7 = param_2;
  local_1c = param_4;
  uVar2 = FUN_100d55bc();
  if (param_2 != 8) {
    if ((param_2 == 9) && (uVar2 == 8)) {
      FUN_100d5604(param_1,0);
      iVar4 = FUN_10136574();
      if (param_1 == iVar4) {
        (*(code *)*DAT_100dc318)(0x12,0);
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0xffffffff;
    }
    goto LAB_100dc2ac;
  }
  if (uVar2 < 2) {
    iVar3 = FUN_10136574();
    if (param_1 == iVar3) {
      local_1c = CONCAT22(local_1c._2_2_,0x801);
      iVar3 = FUN_10136574();
      FUN_100d57b8(iVar3,&local_1c,(int)&local_1c + 1);
      puVar1 = DAT_100dc318;
      if (iVar3 != 0) {
        if ((local_1c & 0xff) == 1) {
          uVar5 = 0xf;
LAB_100dc28a:
          local_1c = CONCAT31(local_1c._1_3_,uVar5);
        }
        else if ((local_1c & 0xff) == 2) {
          uVar5 = 0xb;
          goto LAB_100dc28a;
        }
        (*(code *)*DAT_100dc318)(2,&local_1c,2,(code *)*DAT_100dc318,iVar4,iVar7,param_3);
      }
      (*(code *)*puVar1)(0x11,0);
      uVar6 = 8;
    }
    else {
      uVar6 = 8;
    }
  }
  else {
    uVar6 = 0xffffffff;
  }
  FUN_100d5604(param_1,2);
LAB_100dc2ac:
  FUN_100a5b78((DAT_100dc320 - DAT_100dc31c) * 0x20 & 0xff00U | 0xb40033,DAT_100dc328,DAT_100dc324,
               uVar2,uVar6,param_2);
  if (uVar6 != 0xffffffff) {
    FUN_100d5544(param_1,uVar6 & 0xff);
  }
  return 0;
}

