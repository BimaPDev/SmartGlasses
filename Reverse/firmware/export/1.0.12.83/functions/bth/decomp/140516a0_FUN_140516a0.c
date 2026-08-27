/* FUN_140516a0 @ 0x140516a0 */

char FUN_140516a0(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_1404a1b4(0);
  cVar1 = '\0';
  if (*(char *)(iVar2 + 0xd8) != '\x01') {
    iVar2 = FUN_1404a1b4(0);
    cVar1 = -(*(char *)(iVar2 + 0xd8) == '\0');
  }
  return cVar1;
}

