/* FUN_14057d64 @ 0x14057d64 */

byte FUN_14057d64(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort uVar2;
  code *pcVar3;
  byte bVar4;
  
  iVar1 = DAT_14057dd0;
  bVar4 = *(byte *)(param_1 + 0x57) & 2;
  if ((*(byte *)(param_1 + 0x57) & 2) != 0) {
    if (*(short *)(param_1 + 0x54) == 30000) {
      bVar4 = 1;
      uVar2 = 30000;
    }
    else {
      uVar2 = *(short *)(param_1 + 0x54) << 1;
      if (uVar2 < 30000) {
        bVar4 = 2;
        *(ushort *)(param_1 + 0x54) = uVar2;
      }
      else {
        *(undefined2 *)(param_1 + 0x54) = 30000;
        pcVar3 = *(code **)(*(int *)(iVar1 + 0x10) + 0x34);
        if (pcVar3 == (code *)0x0) {
          bVar4 = 2;
          uVar2 = 30000;
        }
        else {
          (*pcVar3)(*(undefined1 *)(param_1 + 0x42),*(undefined4 *)(param_1 + 0x3c),pcVar3,30000,
                    param_4);
          bVar4 = 2;
          uVar2 = *(ushort *)(param_1 + 0x54);
        }
      }
    }
    FUN_14058860(param_1 + 0x48,uVar2);
    *(byte *)(param_1 + 0x57) = *(byte *)(param_1 + 0x57) | 2;
  }
  return bVar4;
}

