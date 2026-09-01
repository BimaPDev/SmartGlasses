/* FUN_10136774 @ 0x10136774 */

void FUN_10136774(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  pbVar2 = (byte *)FUN_10136622(*param_1);
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *(byte *)(param_1 + 1);
    *(undefined2 *)(pbVar2 + 2) = *(undefined2 *)((int)param_1 + 6);
    *pbVar2 = *pbVar2 & 0xc0 | bVar1 & 0xf;
    uVar3 = FUN_1013676c();
    *(undefined4 *)(pbVar2 + 8) = uVar3;
  }
  return;
}

