/* FUN_100a0304 @ 0x100a0304 */

int FUN_100a0304(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  
  puVar1 = DAT_100a030c;
  iVar2 = thunk_FUN_1009f30c(0x10,DAT_1009f410,param_3,param_4,param_4);
  uVar6 = (DAT_1009f414 - DAT_1009f418) * 0x20 & 0xff00;
  if (iVar2 == 0) {
    FUN_100a5b78(uVar6 | 0xa0011,DAT_1009f420,DAT_1009f41c);
  }
  else {
    pcVar5 = (code *)*puVar1;
    *(undefined4 **)(iVar2 + 0xc) = puVar1;
    if ((pcVar5 != (code *)0x0) && (iVar3 = (*pcVar5)(iVar2,param_1), iVar3 != 0)) {
      FUN_100a5b78(uVar6 | 0x120011,DAT_1009f420,DAT_1009f430,iVar3);
      FUN_1012d1f4(iVar2);
      return 0;
    }
  }
  uVar4 = DAT_1009f428;
  if (iVar2 != 0) {
    uVar4 = DAT_1009f424;
  }
  FUN_100a5b78(uVar6 | 0x190031,DAT_1009f420,DAT_1009f42c,uVar4);
  return iVar2;
}

