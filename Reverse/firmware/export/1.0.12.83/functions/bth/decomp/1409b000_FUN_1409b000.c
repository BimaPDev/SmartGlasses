/* FUN_1409b000 @ 0x1409b000 */

void FUN_1409b000(void)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = DAT_1409b030;
  if (*DAT_1409b030 != '\0') {
    return;
  }
  FUN_1409e644(DAT_1409b034);
  FUN_1409bb4c();
  uVar2 = DAT_1409b03c;
  *DAT_1409b038 = 0xffff;
  FUN_140b4be0(10,uVar2);
  FUN_1409b3c4(DAT_1409b040);
  *pcVar1 = '\x01';
  return;
}

