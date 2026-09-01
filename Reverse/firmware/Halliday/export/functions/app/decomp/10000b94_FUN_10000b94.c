/* FUN_10000b94 @ 0x10000b94 */

void FUN_10000b94(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = DAT_10000bb0 + 9;
  puVar2 = DAT_10000bb0;
  do {
    iVar3 = iVar3 + 1;
    *(undefined4 *)*puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 9);
  return;
}

