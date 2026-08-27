/* FUN_2c567150 @ 0x2c567150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c567150(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined1 param_7,undefined1 param_8)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uStack_30;
  int iStack_2c;
  
  iStack_2c = *_LAB_2c567314;
  FUN_2c52f5f4(param_1 + 4,param_2,param_3,0);
  FUN_2c52f5f4(param_1 + 0x1c,param_3);
  piVar1 = _LAB_2c567318;
  FUN_2c52f5f4(param_1 + 0x34,param_4);
  if (*piVar1 == 0) {
    FUN_2c4723c4();
    *piVar1 = 1;
  }
  puVar3 = (undefined4 *)FUN_2c47245c(0,0x4c);
  uVar2 = _LAB_2c56731c;
  puVar6 = puVar3 + 3;
  *puVar3 = _LAB_2c56731c;
  puVar3[1] = puVar6;
  puVar4 = *(undefined1 **)(param_5 + 4);
  uVar5 = *(uint *)(param_5 + 8);
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567308;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(puVar3 + 3) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c5672b0;
  }
  else {
    puVar6 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    puVar3[1] = puVar6;
    puVar3[3] = uStack_30;
LAB_2c5672b0:
    FUN_2c674668(puVar6,puVar4,uVar5);
    puVar6 = (undefined4 *)puVar3[1];
  }
  puVar3[2] = uStack_30;
  *(undefined1 *)((int)puVar6 + uStack_30) = 0;
  puVar6 = puVar3 + 9;
  puVar3[7] = puVar6;
  puVar4 = *(undefined1 **)(param_5 + 0x1c);
  uVar5 = *(uint *)(param_5 + 0x20);
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) goto LAB_2c567308;
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(puVar3 + 9) = *puVar4;
    }
    else if (uVar5 != 0) goto LAB_2c5672fa;
  }
  else {
    puVar6 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    puVar3[7] = puVar6;
    puVar3[9] = uStack_30;
LAB_2c5672fa:
    FUN_2c674668(puVar6,puVar4,uVar5);
    puVar6 = (undefined4 *)puVar3[7];
  }
  puVar3[8] = uStack_30;
  *(undefined1 *)((int)puVar6 + uStack_30) = 0;
  puVar6 = puVar3 + 0xf;
  puVar3[0xd] = puVar6;
  puVar4 = *(undefined1 **)(param_5 + 0x34);
  uVar5 = *(uint *)(param_5 + 0x38);
  if ((puVar4 + uVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0)) {
LAB_2c567308:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c567320);
  }
  uStack_30 = uVar5;
  if (uVar5 < 0x10) {
    if (uVar5 == 1) {
      *(undefined1 *)(puVar3 + 0xf) = *puVar4;
      goto LAB_2c567220;
    }
    if (uVar5 == 0) goto LAB_2c567220;
  }
  else {
    puVar6 = (undefined4 *)FUN_2c566cd4(&uStack_30,0);
    puVar3[0xd] = puVar6;
    puVar3[0xf] = uStack_30;
  }
  FUN_2c674668(puVar6,puVar4,uVar5);
  puVar6 = (undefined4 *)puVar3[0xd];
LAB_2c567220:
  puVar3[0xe] = uStack_30;
  *(undefined1 *)((int)puVar6 + uStack_30) = 0;
  puVar6 = *(undefined4 **)(param_1 + 0x4c);
  *(undefined4 **)(param_1 + 0x4c) = puVar3;
  if (puVar6 == (undefined4 *)0x0) {
    FUN_2c52f5f4(param_1 + 0x50,param_6);
    piVar1 = _LAB_2c567314;
    *(undefined1 *)(param_1 + 0x6c) = param_7;
    *(undefined1 *)(param_1 + 0x6d) = param_8;
    if (*piVar1 != iStack_2c) {
                    /* WARNING: Subroutine does not return */
      stack_chk_fail();
    }
    return;
  }
  *puVar6 = uVar2;
  if ((undefined4 *)puVar6[0xd] != puVar6 + 0xf) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[7] != puVar6 + 9) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if ((undefined4 *)puVar6[1] == puVar6 + 3) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

