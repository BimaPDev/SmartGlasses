/* FUN_100ed884 @ 0x100ed884 */

void FUN_100ed884(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  
  puVar1 = PTR_DAT_100ed8e0;
  if (param_1 == 0) {
    return;
  }
  iVar3 = 0;
  puVar4 = PTR_DAT_100ed8e0;
  while ((*(code **)(puVar4 + 0x1c) == (code *)0x0 ||
         (iVar2 = (**(code **)(puVar4 + 0x1c))(param_1), iVar2 == 0))) {
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 0x24;
    if (iVar3 == 3) {
      FUN_100a5b78(DAT_100ed8ec | ((int)PTR_DAT_100ed8e8 - (int)PTR_DAT_100ed8e4) * 0x20 & 0xff00U,
                   DAT_100ed8f4,DAT_100ed8f0);
      return;
    }
  }
  if (*(code **)(puVar1 + iVar3 * 0x24 + 0x14) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x100ed8da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(puVar1 + iVar3 * 0x24 + 0x14))(param_1);
  return;
}

