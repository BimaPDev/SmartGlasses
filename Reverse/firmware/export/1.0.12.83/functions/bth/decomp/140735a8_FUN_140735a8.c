/* FUN_140735a8 @ 0x140735a8 */

/* WARNING: Instruction at (ram,0x14083622) overlaps instruction at (ram,0x14083620)
    */

undefined4 FUN_140735a8(uint *param_1)

{
  undefined1 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  code *pcVar6;
  byte bVar7;
  byte unaff_r6;
  uint uVar8;
  byte unaff_r7;
  undefined4 *unaff_r8;
  int unaff_r9;
  undefined2 *unaff_r11;
  undefined4 unaff_lr;
  uint *in_stack_00000000;
  uint *in_stack_00000004;
  undefined1 uStack00000008;
  undefined1 *in_stack_0000000c;
  undefined2 *in_stack_00000010;
  uint in_stack_00000014;
  undefined4 in_stack_00000038;
  int in_stack_0000003c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  undefined4 local_14;
  
  if ((param_1 == (uint *)0x0) || (*(char *)((int)param_1 + 0xb) == '\0')) {
    return 1;
  }
  bVar7 = *(char *)((int)param_1 + 0xb) - 1;
  *(byte *)((int)param_1 + 0xb) = bVar7;
  *(undefined1 *)(param_1 + 0xb) = 0xa5;
  if (bVar7 != 0) {
    return 0;
  }
  puVar2 = param_1;
  if ((int)((uint)*(byte *)((int)param_1 + 0x2d) << 0x1b) < 0) {
    unaff_lr = 0x140735d9;
    puVar2 = (uint *)(*(code *)param_1[3])(param_1,param_1[4]);
  }
  local_18 = (uint)*(byte *)((int)param_1 + 10);
  pcVar6 = (code *)(local_18 - 0xf8);
  puVar5 = &switchD_140735e4::switchdataD_140735e8;
  switch(pcVar6) {
  case (code *)0x0:
    iStack_24 = (int)param_1 + 0x39;
    iStack_2c = *DAT_140836d0;
    uStack_38 = 0;
    uStack_34 = 0;
    uStack_3c = 0;
    iStack_30 = 0;
    uStack_40 = 0x50;
    uStack_20 = (uint)bVar7;
    uStack_1c = unaff_lr;
    FUN_1408ad10(1,DAT_140836d4,&uStack_40,0);
    if (iStack_30 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1402a64c(0x41,DAT_140836d8,0x50);
    }
    if (*DAT_140836d0 == iStack_2c) {
      uVar4 = FUN_140834b4(iStack_30,0,0);
      return uVar4;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  case (code *)0x2:
switchD_140735e4_caseD_2:
    FUN_14074f94(puVar5 + 4);
    puVar5 = in_stack_00000000;
  case (code *)0x1:
    puVar2 = puVar5;
    *(byte *)(puVar2 + 4) = unaff_r6;
LAB_14083606:
    puVar5 = (uint *)0x55d;
    local_18 = 0;
    in_stack_00000000 = in_stack_00000004;
  case (code *)0x6:
    FUN_14075b28(puVar2,local_18,puVar5);
    *in_stack_00000000 = 0;
    break;
  case (code *)0x4:
    puVar2 = (uint *)param_1[2];
    local_18 = 0x1c01;
    pcVar6 = *(code **)(unaff_r11 + 8);
  case (code *)0x3:
    (*pcVar6)((int)puVar2 + 6,local_18,&stack0x00000008);
LAB_14083526:
    if (param_1[0x11] != 0) {
      FUN_14075428(param_1[0x11],0,0x597);
      param_1[0x11] = 0;
    }
    while (iVar3 = FUN_14074d5c(param_1 + 3), iVar3 != 0) {
      FUN_14075428(iVar3,0,0x59d);
    }
    FUN_14075b28(param_1,0,0x5a0);
    iVar3 = FUN_14074b88(unaff_r8 + 3);
    if (iVar3 != 0) {
      if (unaff_r9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x41,uRam1408365c);
      }
      FUN_1408e4a8(*unaff_r8);
    }
    if (*piRam14083654 == in_stack_0000003c) {
      return 0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  case (code *)0x5:
    goto LAB_14083620;
  case (code *)0x7:
    FUN_140826f4();
    FUN_14074b0c(param_1);
    if (param_1[8] == 0) goto LAB_14083526;
    unaff_r6 = *(byte *)((int)param_1 + 0x3d);
    uVar8 = (uint)unaff_r6;
    if (uVar8 != 0) goto LAB_14083526;
    FUN_1408223c(&stack0x00000018,param_1);
    unaff_r11 = (undefined2 *)param_1[10];
    _uStack00000008 = (uint)unaff_r7;
    in_stack_0000000c = (undefined1 *)uVar8;
    in_stack_00000010 = (undefined2 *)uVar8;
    in_stack_00000014 = uVar8;
    uVar1 = FUN_1408ad70(param_1[2]);
    in_stack_0000000c = &stack0x00000018;
    in_stack_00000014 = in_stack_00000038;
    pcVar6 = (code *)(uint)*(byte *)((int)param_1 + 0x1a);
    puVar2 = (uint *)param_1[0xb];
    _uStack00000008 = CONCAT11(uVar1,uStack00000008);
    _uStack00000008 = (uint)CONCAT12(*(byte *)((int)param_1 + 0x1a),_uStack00000008);
    in_stack_00000010 = unaff_r11;
    if (puVar2 == (uint *)0x0) goto LAB_14083620;
    in_stack_00000004 = (uint *)FUN_14083294(puVar2);
    if (in_stack_00000004 != (uint *)0x0) {
      puVar5 = puVar2;
      in_stack_00000000 = puVar2;
      if ((char)puVar2[4] != '\0') goto switchD_140735e4_caseD_2;
      goto LAB_14083606;
    }
    break;
  default:
    local_14 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x44,DAT_14073694,0x1cc,DAT_14073690);
  }
  param_1[0xb] = 0;
  pcVar6 = (code *)(uint)*(byte *)((int)param_1 + 0x1a);
LAB_14083620:
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,uRam14083660,*unaff_r11,pcVar6);
}

