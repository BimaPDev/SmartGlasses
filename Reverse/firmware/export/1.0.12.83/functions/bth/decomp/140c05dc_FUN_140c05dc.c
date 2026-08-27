/* FUN_140c05dc @ 0x140c05dc */

void FUN_140c05dc(void)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = DAT_140c05fc;
  if ((-1 < (int)((uint)*DAT_140c05fc << 0x1f)) && (iVar2 = FUN_140bff16(DAT_140c05fc), iVar2 != 0))
  {
    FUN_140bff2e(pbVar1);
    return;
  }
  return;
}

