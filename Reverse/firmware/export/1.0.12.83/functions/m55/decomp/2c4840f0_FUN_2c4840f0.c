/* FUN_2c4840f0 @ 0x2c4840f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4840f0(void)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  
  pcVar1 = _LAB_2c484128;
  cVar3 = *_LAB_2c484128;
  if (cVar3 == '\x04') {
    iVar2 = FUN_2c471604(1);
    cVar3 = *(char *)(iVar2 + 0x3c);
    *pcVar1 = cVar3;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0xd8,_LAB_2c484138,_LAB_2c484134,_LAB_2c484130,_LAB_2c48412c,cVar3);
}

