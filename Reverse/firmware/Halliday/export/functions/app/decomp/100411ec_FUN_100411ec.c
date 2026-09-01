/* FUN_100411ec @ 0x100411ec */

int FUN_100411ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  iVar4 = *DAT_10041370;
  uVar6 = (DAT_10041374 - DAT_10041378) * 0x20 & 0xff00;
  FUN_100a5b78(uVar6 | 0x4d0031,DAT_10041380,DAT_1004137c,DAT_10041378,param_1,iVar4,param_3);
  uVar2 = (**(code **)(DAT_10041384 + 4))();
  iVar3 = FUN_10041164();
  if (iVar3 != 0) {
    iVar3 = 0;
    goto LAB_1004125a;
  }
  FUN_100a5b78(uVar6 | 0x530031,DAT_10041380,DAT_10041388,uVar2,param_1,iVar4,param_3);
  iVar1 = DAT_100413a0;
  iVar3 = DAT_10041398;
  iVar7 = DAT_10041394;
  switch(uVar2) {
  case 1:
    iVar3 = (**(code **)(DAT_1004138c + 8))();
    if (iVar3 != 0x54) goto LAB_1004126a;
    break;
  case 2:
    iVar3 = (**(code **)(DAT_1004138c + 8))();
    if (iVar3 != 0x6d) {
      uVar2 = 0x6d;
      goto LAB_1004126e;
    }
    break;
  case 3:
    iVar3 = (**(code **)(DAT_1004138c + 8))();
    if (iVar3 != 0x70) {
      uVar2 = 0x70;
      goto LAB_1004126e;
    }
    break;
  case 4:
    uVar9 = (**(code **)(DAT_10041398 + 0xc))();
    iVar7 = (int)uVar9;
    if (iVar7 == 0) {
      FUN_10052c38(1,2);
      (**(code **)(iVar3 + 4))();
    }
    else {
      (**(code **)(iVar3 + 8))(iVar7,(int)((ulonglong)uVar9 >> 0x20),iVar7);
      FUN_10052c38(1,3,0);
    }
    FUN_10044cc8();
    break;
  case 5:
    puVar8 = *(undefined4 **)(DAT_10041390 + 0x3c);
    iVar3 = (*(code *)*puVar8)();
    (*(code *)puVar8[1])(iVar3 == 0);
    break;
  case 6:
    iVar3 = (**(code **)(DAT_10041394 + 0x24))();
    (**(code **)(iVar7 + 0x20))();
    if (iVar3 != 0) {
      FUN_10052c38(1,8,0);
      goto LAB_1004125a;
    }
    uVar2 = 9;
    goto LAB_100412c2;
  case 7:
    iVar3 = (**(code **)(DAT_1004138c + 8))();
    if (iVar3 != 0x60) {
      uVar2 = 0x60;
      goto LAB_1004126e;
    }
    break;
  case 8:
    iVar3 = (**(code **)(DAT_1004138c + 8))();
    if (iVar3 != 0x62) {
      uVar2 = 0x62;
      goto LAB_1004126e;
    }
    break;
  case 9:
    iVar7 = *(int *)(DAT_1004139c + 0x34);
    iVar3 = (**(code **)(iVar7 + 0x10))();
    if (iVar3 == 0) {
      pcVar5 = *(code **)(iVar7 + 8);
    }
    else {
      pcVar5 = *(code **)(iVar7 + 0xc);
    }
    (*pcVar5)();
    FUN_10045a1c();
    break;
  case 10:
    puVar8 = *(undefined4 **)(DAT_10041390 + 0x30);
    iVar3 = (*(code *)*puVar8)();
    (*(code *)puVar8[1])(iVar3 == 0);
    if (iVar3 == 0) {
      uVar2 = 5;
    }
    else {
      uVar2 = 4;
    }
LAB_100412c2:
    FUN_10052c38(1,uVar2,0);
    break;
  default:
    iVar3 = (**(code **)(DAT_100413a0 + 0x18))();
    if (iVar3 == 0) {
      (**(code **)(iVar1 + 8))();
    }
  }
  while( true ) {
    iVar3 = 1;
LAB_1004125a:
    if (*DAT_10041370 == iVar4) break;
    FUN_1013cdc0();
LAB_1004126a:
    uVar2 = 0x54;
LAB_1004126e:
    FUN_1013965a(uVar2,0);
  }
  return iVar3;
}

