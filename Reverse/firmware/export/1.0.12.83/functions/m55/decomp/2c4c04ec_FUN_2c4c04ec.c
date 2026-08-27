/* FUN_2c4c04ec @ 0x2c4c04ec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4c04ec(int param_1,int param_2)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  
  pcVar1 = _LAB_2c4c05a4;
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(_LAB_2c4c05ac,param_1);
  }
  if ((*_LAB_2c4c05a4 == '\0') && (_LAB_2c4c05a4[1] == '\0')) {
    iVar3 = 10;
    func_0x2c674698(1);
    func_0x2c6747c8();
    FUN_2c673e48(0x5f);
    FUN_2c673e48(0x2c);
    FUN_2c674438(0x5f);
    FUN_2c674438(0x2c);
    FUN_2c673e08(2);
    puVar2 = _LAB_2c4c05a8;
    _LAB_2c4c05a8[4] = _LAB_2c4c05a8[4] & 0xffff7fff;
    puVar2[0xd] = puVar2[0xd] & 0xfffffffe;
    puVar2[0xd] = puVar2[0xd] & 0xfffffffd;
    puVar2[2] = puVar2[2] & 0xfffffffe;
    puVar2[1] = puVar2[1] & 0xfffffffe;
    puVar2[4] = puVar2[4] & 0xfffffff8;
    puVar2[4] = puVar2[4] | 0x100000;
    puVar2[5] = puVar2[5] | 4;
    puVar2[4] = puVar2[4] | 0x280000;
    *puVar2 = *puVar2 | 1;
    do {
      func_0x2c674698(0);
      func_0x2c674698(1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    pcVar1[param_2] = '\x01';
    return 0;
  }
  _LAB_2c4c05a4[param_2] = '\x01';
  return 0;
}

