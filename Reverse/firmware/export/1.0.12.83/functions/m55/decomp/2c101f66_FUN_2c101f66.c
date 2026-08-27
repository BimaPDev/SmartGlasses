/* FUN_2c101f66 @ 0x2c101f66 */

void FUN_2c101f66(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  int unaff_r4;
  int unaff_r6;
  code *UNRECOVERED_JUMPTABLE;
  
  *(int *)(unaff_r6 + 0x3c) = unaff_r4;
  puVar3 = (ushort *)(*(ushort *)(param_4 + 0x36) - 6);
  uVar2 = (uint)*(ushort *)((uint)*(ushort *)(param_4 + 0x36) + unaff_r4);
  uVar1 = *puVar3;
  *puVar3 = (ushort)(byte)uVar1;
  *(undefined1 *)(uVar2 + 9) = 0;
                    /* WARNING: Could not recover jumptable at 0x2c101f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,puVar3,0,(byte)uVar1,param_1);
  return;
}

