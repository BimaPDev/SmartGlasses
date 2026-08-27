/* FUN_1404aa14 @ 0x1404aa14 */

undefined4 FUN_1404aa14(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  iVar4 = FUN_14095e18();
  uVar6 = 0;
  if (iVar4 != 0) {
    iVar5 = FUN_140955c0();
    uVar6 = FUN_140955b4(iVar4);
    if ((iVar5 == 0) || (iVar5 == 5)) {
      FUN_1404866c(uVar6,5);
      puVar1 = DAT_1404857c;
      puVar2 = (undefined4 *)FUN_140e5728(*DAT_1404857c,0);
      if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_1402b0f8(DAT_14048580);
      }
      uVar3 = FUN_140e5998();
      *puVar2 = uVar3;
      puVar2[1] = 1;
      *(short *)(puVar2 + 2) = (short)uVar6;
      iVar4 = FUN_140e56b8(*puVar1,puVar2,uVar3,1,unaff_r4,unaff_r5);
      if (iVar4 == 0) {
        thunk_FUN_140a20f4();
        return 0;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1402b0f8(DAT_14048584);
    }
  }
  return uVar6;
}

