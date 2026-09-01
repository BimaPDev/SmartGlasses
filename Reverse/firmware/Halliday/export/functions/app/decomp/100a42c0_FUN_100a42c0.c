/* FUN_100a42c0 @ 0x100a42c0 */

undefined4 FUN_100a42c0(void)

{
  undefined2 *puVar1;
  undefined1 uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  
  puVar1 = DAT_100a42dc;
  *DAT_100a42dc = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  uVar2 = FUN_1011a86a();
  *(undefined1 *)((int)puVar1 + 1) = uVar2;
  iVar4 = 0;
  pcVar3 = (char *)*DAT_100a4178;
  pcVar5 = pcVar3;
  while( true ) {
    pcVar5 = pcVar5 + 4;
    if (*(char **)pcVar5 == (char *)0x0) {
      *(char **)(pcVar3 + iVar4 * 4 + 4) = DAT_100a42e0;
      *pcVar3 = *pcVar3 + '\x01';
      return 0;
    }
    if (**(char **)pcVar5 == *DAT_100a42e0) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 5) {
      return 0;
    }
  }
  return 0xffffffef;
}

