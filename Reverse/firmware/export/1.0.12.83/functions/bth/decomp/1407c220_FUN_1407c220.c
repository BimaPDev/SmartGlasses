/* FUN_1407c220 @ 0x1407c220 */

void FUN_1407c220(int param_1,ushort param_2,undefined1 *param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  ushort *puVar2;
  ushort uVar3;
  
  puVar2 = *(ushort **)(param_1 + 0x68);
  if (puVar2 != (ushort *)0x0) {
    uVar3 = 1;
    do {
      if ((char)puVar2[1] == '\0') {
        *(undefined4 *)(puVar2 + 6) = param_4;
        *(undefined1 *)(puVar2 + 2) = param_5;
        *(undefined1 *)((int)puVar2 + 5) = 1;
        *(undefined1 *)(puVar2 + 1) = 1;
        *puVar2 = (uVar3 & 0x3f) << 2 | (param_2 & 1) << 0xb | *puVar2 & 0x701;
        *(undefined1 **)(puVar2 + 4) = param_3;
        *(undefined1 *)((int)puVar2 + 3) = *param_3;
        uVar1 = DAT_1407c2bc;
        *(bool *)(puVar2 + 8) = 0x102 < *(ushort *)(param_1 + 0x18);
                    /* WARNING: Subroutine does not return */
        FUN_1402a64c(0x47,uVar1,uVar3 & 0x3f,puVar2,param_1,param_3,*param_3,param_3[1],
                     *(undefined4 *)(param_3 + 2));
      }
      puVar2 = *(ushort **)(puVar2 + 10);
      uVar3 = uVar3 + 1 & 0xff;
    } while (puVar2 != (ushort *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x42,DAT_1407c2c4,DAT_1407c2c0,0x957);
}

