/* FUN_14095748 @ 0x14095748 */

char FUN_14095748(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  puVar1 = DAT_14095778;
  FUN_140e5148(*DAT_14095778,0xffffffff);
  iVar2 = DAT_1409577c;
  *(undefined1 *)(DAT_1409577c + 8) = 0;
  iVar3 = FUN_1404a1b4();
  cVar5 = *(char *)(iVar2 + 8);
  if (*(char *)(iVar3 + 6) != '\0') {
    cVar4 = cVar5 + '\x01';
    cVar5 = cVar5 + '\x01';
    *(char *)(iVar2 + 8) = cVar4;
  }
  FUN_140e52d8(*puVar1);
  return cVar5;
}

