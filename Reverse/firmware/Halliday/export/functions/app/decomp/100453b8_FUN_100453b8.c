/* FUN_100453b8 @ 0x100453b8 */

void FUN_100453b8(int param_1)

{
  uint uVar1;
  uint extraout_r1;
  undefined1 *extraout_r2;
  undefined1 *puVar2;
  int iVar3;
  int extraout_r3;
  byte abStack_34 [40];
  int local_c;
  
  local_c = *DAT_10045430;
  FUN_1011ea48(abStack_34,0,0x24,0);
  thunk_FUN_1009efa0(DAT_10045434,abStack_34,0x24);
  iVar3 = param_1 * 0xc;
  uVar1 = (uint)abStack_34[iVar3];
  iVar3 = (int)(short)((ushort)abStack_34[iVar3 + 4] + (ushort)abStack_34[iVar3 + 3] * 0x3c);
  puVar2 = &stack0xfffffff8 + param_1;
  if (uVar1 != 1) goto LAB_10045422;
  while( true ) {
    puVar2[-8] = (char)uVar1;
    FUN_100a5174(iVar3 * 0x3c,param_1,puVar2[-8]);
    if (*DAT_10045430 == local_c) break;
    FUN_1013cdc0();
    uVar1 = extraout_r1;
    puVar2 = extraout_r2;
    iVar3 = extraout_r3;
LAB_10045422:
    if (uVar1 != 2) {
      uVar1 = 0;
    }
  }
  return;
}

