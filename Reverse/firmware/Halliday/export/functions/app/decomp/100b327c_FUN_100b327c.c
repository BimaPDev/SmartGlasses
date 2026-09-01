/* FUN_100b327c @ 0x100b327c */

uint FUN_100b327c(int param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x50);
  iVar3 = FUN_1012d6fa(*(undefined4 *)(param_1 + 200));
  if (iVar7 == iVar3) {
    uVar5 = 0;
  }
  else {
    uVar4 = FUN_1012d608(*(undefined4 *)(param_1 + 200));
    uVar5 = FUN_1011dcba(*(undefined4 *)(param_1 + 0x50));
    if ((int)uVar4 <= (int)uVar5) {
      uVar5 = uVar4;
    }
    uVar5 = uVar5 & 0xfffffffe;
    if (0 < (int)uVar5) {
      thunk_FUN_1012d3ee(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 200),uVar5,
                         PTR_FUN_100a0654_1_100b33b8);
    }
  }
  iVar7 = *(int *)(param_1 + 0x54);
  iVar3 = FUN_1012d6fa(*(undefined4 *)(param_1 + 0xcc));
  puVar2 = PTR_s_drop_mic_100b33c8;
  puVar1 = PTR_FUN_100a07a0_1_100b33c4;
  if (iVar7 != iVar3) {
    if ((*(byte *)(param_1 + 0x9a) & 0xfb) == 0xb) {
      iVar3 = (int)PTR_DAT_100b33bc - (int)PTR_DAT_100b33c0;
      do {
        while( true ) {
          uVar4 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x54));
          if (uVar4 < *(byte *)(param_1 + 0x84)) {
            return uVar5;
          }
          if (*(short *)(param_1 + 0x86) != 0) break;
LAB_100b335e:
          thunk_FUN_1012d378(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0xcc),
                             *(undefined1 *)(param_1 + 0x84),puVar1);
        }
        uVar6 = *(short *)(param_1 + 0x86) - 1;
        *(ushort *)(param_1 + 0x86) = uVar6;
        if (((uint)uVar6 % 400 != 0) ||
           (iVar7 = FUN_1012d608(*(undefined4 *)(param_1 + 0xcc)),
           iVar7 / (int)(uint)*(byte *)(param_1 + 0x84) <= (int)(uint)*(byte *)(param_1 + 0x85)))
        goto LAB_100b335e;
        FUN_100a5b78(iVar3 * 0x20 & 0xff00U | 0x5f0031,puVar2);
        thunk_FUN_1012d2d0(*(undefined4 *)(param_1 + 0x54),0,*(undefined1 *)(param_1 + 0x84));
      } while( true );
    }
    uVar5 = FUN_1011dcc6(*(undefined4 *)(param_1 + 0x54));
    iVar3 = FUN_1011dcb6(*(undefined4 *)(param_1 + 0x54));
    if ((iVar3 == 0x1000) && (param_2 == 0)) {
      if ((int)uVar5 < 0x800) {
        return 0;
      }
      uVar5 = 0x800;
    }
    uVar4 = FUN_1012d654(*(undefined4 *)(param_1 + 0xcc));
    if ((int)uVar4 <= (int)uVar5) {
      uVar5 = uVar4;
    }
    if (0 < (int)uVar5) {
      thunk_FUN_1012d378(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0xcc),
                         uVar5 & 0xfffffffe,PTR_FUN_100a07a0_1_100b33c4);
    }
  }
  return uVar5;
}

