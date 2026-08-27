/* FUN_140a54f8 @ 0x140a54f8 */

int FUN_140a54f8(uint param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = DAT_140a5228;
  puVar2 = DAT_140a5208;
  uVar6 = (uint)(DAT_140a554c - (int)DAT_140a5548) >> 5;
  if (uVar6 != 0) {
    puVar4 = DAT_140a5548;
    do {
      if (*puVar4 == param_1) {
        if (*(int *)(puVar4 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_140a555c,DAT_140a5558,param_1,*(int *)(puVar4 + 8));
        }
        sVar1 = *(short *)(DAT_140a5228 + 0x40);
        DAT_140a5208[1] = sVar1;
        *(short *)(iVar3 + 0x40) = sVar1 + 1;
        *puVar2 = (short)param_1;
        if (param_3 < 0x401) {
          uVar6 = (uint)(DAT_140a51fc - DAT_140a5200) >> 5;
          if (uVar6 != 0) {
            iVar5 = 0;
            do {
              if (*(ushort *)(DAT_140a5200 + iVar5 * 2) == param_1) {
                FUN_140e5278(DAT_140a5204,param_2,param_3);
                iVar5 = FUN_1402d254(0,DAT_140a5208,param_3 + 4);
                if (iVar5 != 0) {
                  FUN_1402a6e8(4,0x105,DAT_140a5214,DAT_140a5218,DAT_140a5210,DAT_140a520c);
                }
                FUN_140e5328(*(undefined4 *)(iVar3 + 4),0xffffffff);
                if (*(code **)(puVar4 + 0xe) != (code *)0x0) {
                  (**(code **)(puVar4 + 0xe))(param_1,param_2,param_3);
                }
                return iVar5;
              }
              iVar5 = iVar5 + 0x10;
            } while (uVar6 * 0x10 - iVar5 != 0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_140a5220,DAT_140a521c,param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_140a5224,param_3,0x400);
      }
      puVar4 = puVar4 + 0x10;
    } while (puVar4 != DAT_140a5548 + uVar6 * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402b0f8(DAT_140a5554,DAT_140a5550,param_1);
}

