/* FUN_2c62f4ec @ 0x2c62f4ec */

/* WARNING: Possible PIC construction at 0x2c62f51c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c62f520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c62f4ec(void)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  puVar1 = _LAB_2c62f560;
  uVar3 = FUN_2c602d28();
  func_0x2c602dd8();
  func_0x2c63afe0();
  FUN_2c62a554(puVar1);
  uVar2 = _DAT_2c62f564;
  *puVar1 = 2;
  *(undefined4 *)(puVar1 + 4) = uVar2;
  puVar4 = (undefined4 *)FUN_2c62a574(puVar1);
  *_LAB_2c62f568 = puVar4;
  if ((*(char *)*puVar4 != '\x02') && (*(char *)*puVar4 != '\x04')) {
    return;
  }
  puVar4[0x14] = uVar3;
  return;
}

