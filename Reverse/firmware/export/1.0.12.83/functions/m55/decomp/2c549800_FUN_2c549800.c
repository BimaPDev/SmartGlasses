/* FUN_2c549800 @ 0x2c549800 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c549800(void)

{
  undefined4 *puVar1;
  
  puVar1 = _LAB_2c549838;
  FUN_2c64c9c4(_LAB_2c549838,_LAB_2c549840,_LAB_2c54983c);
  *puVar1 = _LAB_2c549844;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)(puVar1 + 9) = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  puVar1[7] = puVar1 + 9;
  puVar1[8] = 0;
  puVar1[0xd] = puVar1 + 0xf;
  puVar1[0xe] = 0;
  return;
}

