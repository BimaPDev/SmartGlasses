/* FUN_10068424 @ 0x10068424 */

void FUN_10068424(int param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = DAT_10068528;
  uVar5 = (DAT_10068524 - DAT_10068520) * 0x20 & 0xff00;
  FUN_100a5b78(uVar5 | 0xde0011,DAT_10068530,DAT_1006852c,DAT_10068520,param_4);
  iVar2 = *(int *)(iVar3 + 0x28) << 0x1b;
  if (iVar2 < 0) {
    FUN_100a5b78(uVar5 | 0xe10011,DAT_10068530,DAT_10068534,iVar2,param_4);
  }
  iVar3 = *(int *)(iVar3 + 0x28);
  if (iVar3 << 0x1c < 0) {
    FUN_100a5b78(uVar5 | 0xe50011,DAT_10068530,DAT_10068538,iVar3,param_4);
  }
  iVar3 = DAT_10068528;
  if (*(int *)(DAT_10068528 + 0x28) << 0x1e < 0) {
    FUN_100a5b78(uVar5 | 0xe80011,DAT_10068530,DAT_1006853c,*(int *)(DAT_10068528 + 0x28),param_4);
    if ((*(int *)(iVar3 + 0x28) << 0x18 < 0) &&
       (FUN_100a5b78(uVar5 | 0xf50011,DAT_10068530,DAT_10068540,*(undefined4 *)(iVar3 + 0x34),
                     param_4), param_1 != 0)) {
      *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) & 0xffffff7f;
    }
  }
  iVar3 = DAT_10068528;
  if (*(int *)(DAT_10068528 + 0x28) << 0x1f < 0) {
    FUN_100a5b78(uVar5 | 0xfd0011,DAT_10068530,DAT_10068544);
  }
  iVar3 = *(int *)(iVar3 + 0x28) << 0x1a;
  if (iVar3 < 0) {
    iVar3 = FUN_100a5b78(DAT_10068548 | uVar5,DAT_10068530,DAT_1006854c);
  }
  iVar1 = *(int *)(DAT_10068528 + 0x28);
  iVar2 = iVar1 << 0x1b;
  if (((iVar2 < 0) || (iVar1 = *(int *)(DAT_10068528 + 0x28) << 0x1e, iVar1 < 0)) &&
     (iVar4 = *(int *)(DAT_10068528 + 0x28) << 0x1b, iVar4 < 0)) {
    FUN_10119dc2(DAT_10068558,DAT_10068554,DAT_10068550,0x14f,iVar3,iVar2);
    FUN_10119dc2(DAT_1006855c);
    FUN_1011a1f0(DAT_10068550,0x14f,iVar1,iVar4);
  }
  *(uint *)(DAT_10068528 + 0x28) = *(uint *)(DAT_10068528 + 0x28) | 0xff;
  *param_2 = 0;
  return;
}

