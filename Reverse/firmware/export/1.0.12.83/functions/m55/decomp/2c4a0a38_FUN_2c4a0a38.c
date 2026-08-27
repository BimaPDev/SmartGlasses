/* FUN_2c4a0a38 @ 0x2c4a0a38 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4a0a38(void)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  int iStack_38;
  undefined1 *puStack_34;
  undefined4 uStack_2c;
  
  uVar6 = _LAB_2c4a0afc;
  uVar5 = _LAB_2c4a0af8;
  puVar4 = _LAB_2c4a0af4;
  uVar3 = _LAB_2c4a0af0;
  pcVar2 = _LAB_2c4a0aec;
  puVar1 = _LAB_2c4a0ae8;
  uStack_2c = *_LAB_2c4a0ae4;
  while( true ) {
    do {
      FUN_2c644324(&iStack_38,*puVar1,0xffffffff);
      puVar7 = puStack_34;
    } while (iStack_38 != 0x20);
    if ((puStack_34 != (undefined1 *)0x0) && (puStack_34[2] == '\x01')) break;
    func_0x2c4a2bcc(*puStack_34,puStack_34[1]);
    iVar8 = FUN_2c644388(*puVar1,puVar7);
    if (iVar8 == 0) {
      *pcVar2 = *pcVar2 + -1;
    }
  }
  iStack_38 = 0;
  *puVar4 = 0;
  FUN_2c4a09bc(0,&iStack_38);
  FUN_2c6444fc(2);
  iVar8 = FUN_2c4c02f4(0x48);
  if (iVar8 == 0) {
    FUN_2c4bce68();
    FUN_2c4a08bc();
    FUN_2c6444fc(2);
    FUN_2c4a09bc(0,&iStack_38);
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x568,uVar3,uVar6,uVar5,iStack_38,0,iVar8);
}

