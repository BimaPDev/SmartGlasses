/* FUN_1402b0f8 @ 0x1402b0f8 */

void FUN_1402b0f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 extraout_r1;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  int extraout_r3;
  int unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined1 auStack_44 [52];
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  puVar2 = puRam1402b14c;
  puVar4 = puRam1402b14c + 1;
  *puRam1402b14c = param_1;
  *puVar4 = param_2;
  puVar2[2] = param_3;
  puVar2[3] = param_4;
  puVar2[4] = unaff_r4;
  puVar2[5] = unaff_r5;
  puVar2[6] = unaff_r6;
  puVar2[7] = unaff_r7;
  puVar2[8] = unaff_r8;
  puVar2[9] = unaff_r9;
  puVar2[10] = unaff_r10;
  puVar2[0xb] = unaff_r11;
  puVar2[0xc] = in_r12;
  puVar2[0xd] = register0x00000054;
  puVar2[0xe] = unaff_lr;
  isThreadModePrivileged();
  cVar1 = isUsingMainStack();
  if (cVar1 == '\x01') {
    puVar7 = (undefined1 *)getProcessStackPointer();
    puVar5 = (undefined1 *)register0x00000054;
  }
  else {
    puVar5 = (undefined1 *)getMainStackPointer();
    puVar7 = (undefined1 *)register0x00000054;
  }
  puVar2[0xf] = puVar5;
  puVar2[0x10] = puVar7;
  FUN_1402af2c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  iVar8 = extraout_r3;
  do {
    if (0x62 < iVar8) {
      iVar8 = 99;
    }
    while( true ) {
      iVar6 = iVar8 + 1;
      *(undefined1 *)(unaff_r4 + iVar8) = 10;
      FUN_1402a128(DAT_1402b0e0,iVar6);
      FUN_1402a13c(2,DAT_1402b0e0,iVar6);
      FUN_1402a27c();
      FUN_1402ab8c(auStack_44);
      FUN_1402ab1c(uStack_8,uStack_4);
      FUN_1402acc8(uStack_10);
      FUN_1402ae14(uStack_10,0x400,0x14);
      FUN_14029f28();
      FUN_1402a27c();
      FUN_1402a314();
      FUN_1402a27c();
      FUN_140e5398(0x50);
      FUN_1402a294();
      iVar8 = FUN_1402a3a8(extraout_r1,extraout_r1,DAT_1402b0e0,100);
      if (0 < iVar8) {
        FUN_14029f28();
        FUN_1402a128(DAT_1402b0e0,iVar8);
      }
      uVar3 = FUN_1402a350(DAT_1402b0e0,100,DAT_1402b0f4,uStack_c);
      FUN_1402a128(DAT_1402b0e0,uVar3);
      FUN_1402a13c(2,DAT_1402b0e0,uVar3);
      iVar8 = FUN_140de9d8(DAT_1402b0e0,100,10);
      if (-1 < iVar8) break;
      iVar8 = 0;
    }
  } while( true );
}

