/* FUN_100a4228 @ 0x100a4228 */

undefined4 FUN_100a4228(uint param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)(*DAT_100a4250 + 4);
  do {
    puVar3 = puVar2 + 1;
    if (*(byte *)*puVar2 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x100a4242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)((byte *)*puVar2 + 8))();
      return uVar1;
    }
    puVar2 = puVar3;
  } while (puVar3 != (undefined4 *)(*DAT_100a4250 + 0x18));
  return 0;
}

