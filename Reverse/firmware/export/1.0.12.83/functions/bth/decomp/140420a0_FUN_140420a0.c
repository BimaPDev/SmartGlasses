/* FUN_140420a0 @ 0x140420a0 */

void FUN_140420a0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  uVar1 = DAT_14042124;
  FUN_1402a6e8(4,0x33c,DAT_1404212c,DAT_14042128,DAT_14042120,DAT_14042124,param_1);
  if (param_1 != 0xff) {
    uVar3 = (uint)*(byte *)(DAT_14042130 + param_1 + 1);
    if (uVar3 == 5) {
      puVar2 = (undefined1 *)FUN_14074378(0xd62,4,0,2);
      puVar2[1] = (char)param_1;
      *puVar2 = 0x65;
      FUN_140743d0();
      FUN_14041f98(param_1,6);
      return;
    }
    if (uVar3 - 6 < 2) {
      FUN_1402a6e8(4,0x353,DAT_1404212c,DAT_14042128,DAT_14042134,uVar1,uVar3);
      return;
    }
  }
  FUN_14045194(2,param_1);
  return;
}

