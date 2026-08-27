/* FUN_1409d6e4 @ 0x1409d6e4 */

void FUN_1409d6e4(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  FUN_1409dc50();
  FUN_1409de5c();
  puVar2 = DAT_1409d514;
  puVar1 = DAT_1409d510;
  *DAT_1409d510 = 0xffff;
  *puVar2 = 0xffffffff;
  *(undefined1 *)(puVar1 + 1) = 0xff;
  return;
}

