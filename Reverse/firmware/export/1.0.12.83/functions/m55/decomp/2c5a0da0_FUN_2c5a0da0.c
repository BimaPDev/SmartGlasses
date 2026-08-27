/* FUN_2c5a0da0 @ 0x2c5a0da0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5a0da0(int param_1,undefined4 param_2,int param_3,uint param_4,uint param_5,
                 undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 *unaff_r5;
  undefined4 unaff_r7;
  uint uVar6;
  int *unaff_r8;
  int iVar7;
  int unaff_r10;
  uint uVar8;
  int unaff_r11;
  uint uStack_1c;
  
  iVar5 = (int)unaff_r5 - _LAB_2c5a0df6_2;
  if (param_1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = param_4;
  iVar1 = iVar5;
  iVar7 = _LAB_2c5a0df6_2;
  FUN_2c64e496((uint)(unaff_r10 - unaff_r11) >> 0x1f,&stack0x0000015c);
  *(int *)(iVar5 + 0x9a) = *(int *)(iVar5 + 0x9a) + 1;
  FUN_2c59ee08(&param_5,iVar5 + 0x9e,&stack0xfffffff8,param_3,uVar4,iVar1,iVar7);
  iVar1 = FUN_2c64ca5c(0x2c);
  iVar7 = iVar1 + 0x18;
  *(int *)(iVar1 + 0x10) = iVar7;
  param_5 = FUN_2c66c4ec();
  if (param_5 < 0x10) {
    iVar3 = iVar7;
    if (param_5 == 1) {
      *(undefined1 *)(iVar1 + 0x18) = *unaff_r5;
      goto LAB_2c5a0bbc;
    }
    if (param_5 == 0) goto LAB_2c5a0bbc;
  }
  else {
    uVar2 = FUN_2c65e908(iVar1 + 0x10,&param_5,0);
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    *(uint *)(iVar1 + 0x18) = param_5;
  }
  FUN_2c674668();
  iVar3 = *(int *)(iVar1 + 0x10);
LAB_2c5a0bbc:
  *(uint *)(iVar1 + 0x14) = param_5;
  *(undefined1 *)(iVar3 + param_5) = 0;
  *(undefined1 *)(iVar1 + 0x28) = 0;
  FUN_2c59f038(&param_7,iVar5 + 0xb6,iVar1 + 0x10);
  iVar3 = param_8;
  if (param_8 == 0) {
    if (iVar7 != *(int *)(iVar1 + 0x10)) {
      thunk_FUN_2c669588(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x18) + 1);
    }
    thunk_FUN_2c669588(iVar1,0x2c);
  }
  else {
    uStack_1c = param_4;
    if ((param_7 == 0) && (param_8 != iVar5 + 0xba)) {
      uVar8 = *(uint *)(iVar1 + 0x14);
      uVar6 = *(uint *)(param_8 + 0x14);
      uVar4 = uVar8;
      if (uVar6 <= uVar8) {
        uVar4 = uVar6;
      }
      if ((uVar4 == 0) ||
         (uStack_1c = FUN_2c66960c(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_8 + 0x10)),
         uStack_1c == 0)) {
        uStack_1c = uVar8 - uVar6;
      }
      uStack_1c = uStack_1c >> 0x1f;
    }
    FUN_2c64e496(uStack_1c,iVar1,iVar3,iVar5 + 0xba);
    *(int *)(iVar5 + 0xca) = *(int *)(iVar5 + 0xca) + 1;
  }
  *(int *)(iVar5 + 0xde) = *(int *)(iVar5 + 0xde) + param_3;
  if (*unaff_r8 != 0) {
    FUN_2c48e424(*unaff_r8,uRam2c5a0da4);
    iVar5 = FUN_2c48de10();
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,_LAB_2c5a0d98,0x2c9);
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,uRam2c5a10c8,0x2c4,FUN_2c5a10c0,_FUN_2c5a10dc);
  }
  FUN_2c48dea0(unaff_r7);
  uVar2 = uRam2c5a10d4;
  iVar1 = *(int *)(iVar5 + 0xc2);
  if (iVar1 != iVar5 + 0xba) {
    do {
      iVar7 = FUN_2c66c5e0(*(undefined4 *)(iVar1 + 0x10),uVar2);
      if (iVar7 != 0) {
        func_0x2c65ea42(iVar5 + 0xe2,iVar1 + 0x10);
      }
      iVar1 = thunk_FUN_2c64e43a(iVar1);
    } while (iVar1 != iVar5 + 0xba);
  }
  *(undefined4 *)(iVar5 + 0xd6) = 0;
  *(undefined4 *)(iVar5 + 0xfa) = 0;
  *(undefined4 *)(iVar5 + 0xfe) = 0xa000;
  if (*(int *)(iVar5 + 0xe6) != 0) {
    iVar1 = FUN_2c59e228(iVar5 + 0x6e,iVar5 + 0xe2);
    if (iVar5 + 0x72 != iVar1) {
      if (*(int *)(iVar5 + 0x10a) != 0) {
        func_0x2c4fc720();
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c62c82c(4,uRam2c5a10c8,0x30c,FUN_2c5a10c0,_DAT_2c5a10d8,*(undefined4 *)(iVar5 + 0xe2));
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5a1184,0x2fd,_LAB_2c5a1180,_DAT_2c5a1188,*(undefined4 *)(iVar5 + 0xe2));
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5a1184,0x2f7,_LAB_2c5a1180,_DAT_2c5a117c);
}

