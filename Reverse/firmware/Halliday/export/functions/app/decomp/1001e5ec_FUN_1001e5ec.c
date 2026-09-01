/* FUN_1001e5ec @ 0x1001e5ec */

void FUN_1001e5ec(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint unaff_r5;
  int iVar7;
  
  iVar5 = *DAT_1001e6d4;
  pcVar6 = (code *)*DAT_1001e6d8;
  if (pcVar6 == (code *)0x0) goto LAB_1001e6c4;
  FUN_1001e6e4(4);
  unaff_r5 = 0;
  do {
    uVar1 = FUN_10126fd2(*(undefined4 *)(pcVar6 + 0xc));
    if (uVar1 <= unaff_r5) {
      FUN_10126fb4(*(undefined4 *)(pcVar6 + 0xc),0);
      FUN_101245ce();
      iVar7 = *(int *)(pcVar6 + 0x18);
      unaff_r5 = *(uint *)(pcVar6 + 0x1c);
      pcVar6 = *(code **)(pcVar6 + 0x14);
      if (pcVar6 != (code *)0x0) {
        iVar2 = (**(code **)(DAT_1001e6dc + 0x28))();
        if (iVar2 == 0) {
          uVar3 = 0x61;
        }
        else {
          uVar3 = 0x60;
        }
        uVar3 = FUN_1004cf14(uVar3);
        FUN_10097998(pcVar6,uVar3);
      }
      if (iVar7 != 0) {
        uVar3 = FUN_1004cf14(0xb3);
        pcVar6 = *(code **)(DAT_1001e6dc + 8);
        uVar4 = (**(code **)(DAT_1001e6dc + 0x18))(0);
        uVar4 = (*pcVar6)(0,uVar4);
        FUN_10097aec(iVar7,DAT_1001e6e0,uVar3,uVar4);
      }
      if (unaff_r5 == 0) {
LAB_1001e6c4:
        if (*DAT_1001e6d4 == iVar5) {
          return;
        }
      }
      else {
        uVar3 = FUN_1004cf14(0xb4);
        pcVar6 = *(code **)(DAT_1001e6dc + 8);
        uVar4 = (**(code **)(DAT_1001e6dc + 0x18))(1);
        uVar4 = (*pcVar6)(1,uVar4);
        if (*DAT_1001e6d4 == iVar5) {
          FUN_10097aec(unaff_r5,DAT_1001e6e0,uVar3,uVar4);
          return;
        }
      }
      FUN_1013cdc0();
    }
    uVar3 = FUN_10126fb4(*(undefined4 *)(pcVar6 + 0xc),unaff_r5);
    uVar4 = FUN_10087308();
    FUN_1008740c(uVar4,uVar3);
    FUN_10124cea(uVar3,0x400);
    unaff_r5 = unaff_r5 + 1;
  } while( true );
}

