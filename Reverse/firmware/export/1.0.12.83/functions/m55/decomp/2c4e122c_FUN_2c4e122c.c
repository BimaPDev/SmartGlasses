/* FUN_2c4e122c @ 0x2c4e122c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c4e122c(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((param_1[0x42] < 1) || (iVar1 = FUN_2c4e118c(), iVar1 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0x58))(param_1,param_2);
    if (iVar1 != 0) {
      if (param_1[0x32] == 0) {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x8aea,0x18,1);
        uVar3 = 0x18;
        uVar4 = _LAB_2c4e1bc8;
      }
      else if ((char)param_1[0x33] == '\0') {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x8aea,0x19,1);
        uVar3 = 0x19;
        uVar4 = _LAB_2c4e1bd8;
      }
      else if (*(char *)((int)param_1 + 0xcd) == '\0') {
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x8aea,0x1a,1);
        uVar3 = 0x1a;
        uVar4 = _LAB_2c4e1bdc;
      }
      else {
        if (*(char *)((int)param_1 + 0xce) != '\0') {
          func_0x2c4df538(param_1 + 0x31,param_1 + 0x14,0);
          if (param_2 != (int *)0x0) {
            param_2[2] = (int)(param_1 + 0x22);
            *param_2 = (int)(param_1 + 0x14);
            param_2[1] = (int)(param_1 + 0x2a);
          }
          uVar2 = 0;
          if ((param_1[0x17] != 0) && (uVar2 = 0, *(short *)((int)param_1 + 0x5a) != 0)) {
            uVar2 = 1;
          }
          *(undefined1 *)((int)param_1 + 0xa5) = uVar2;
          return 1;
        }
        FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x8aea,0x1b,1);
        uVar3 = 0x1b;
        uVar4 = _LAB_2c4e1be0;
      }
      FUN_2c4e0504(_LAB_2c4e1bd4,0,0,0,_LAB_2c4e1bd0,uVar3,_LAB_2c4e1bcc,0x1300,uVar4);
      return 0;
    }
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x75,1);
    uVar3 = 0x75;
    uVar4 = _LAB_2c4e12d4;
  }
  else {
    FUN_2c4de6ca(*(int *)(*param_1 + -0xc) + (int)param_1,0x7bba,0x6d,0x202);
    uVar3 = 0x6d;
    uVar4 = _LAB_2c4e12c4;
  }
  FUN_2c4e0504(_LAB_2c4e12d0,0,0,0,_LAB_2c4e12cc,uVar3,_LAB_2c4e12c8,0x1300,uVar4);
  return 0;
}

