/* FUN_2c4e3964 @ 0x2c4e3964 */

void FUN_2c4e3964(void)

{
  ushort *puVar1;
  undefined4 uVar2;
  
  puVar1 = (ushort *)FUN_2c4e3908();
  if (puVar1 != (ushort *)0x0) {
    if (*(int *)puVar1 != 0 || *(int *)(puVar1 + 2) != 0) {
      uVar2 = DAT_2c4e34dc;
      if ((*puVar1 & 0xfff) != 0x200) {
        uVar2 = DAT_2c4e34e0;
      }
      FUN_2c4e0504(DAT_2c4e34e4,2,0,0,DAT_2c4e34f0,0x12,DAT_2c4e34ec,0x200,DAT_2c4e34e8,uVar2,
                   *(int *)(puVar1 + 2),*(int *)puVar1,*puVar1,puVar1[1],puVar1[2],puVar1[3]);
    }
  }
  return;
}

