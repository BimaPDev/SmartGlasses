/* FUN_2c53d79c @ 0x2c53d79c */

void FUN_2c53d79c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  do {
    if (param_1 == 0) {
      return;
    }
    iVar4 = *(int *)(param_1 + 0xc);
    while (iVar4 != 0) {
      iVar3 = *(int *)(iVar4 + 0xc);
      while (iVar3 != 0) {
        iVar2 = *(int *)(iVar3 + 0xc);
        while (iVar2 != 0) {
          iVar1 = *(int *)(iVar2 + 0xc);
          while (iVar1 != 0) {
            iVar5 = *(int *)(iVar1 + 0xc);
            while (iVar5 != 0) {
              iVar6 = *(int *)(iVar5 + 0xc);
              while (iVar6 != 0) {
                iVar9 = *(int *)(iVar6 + 0xc);
                while (iVar9 != 0) {
                  iVar8 = *(int *)(iVar9 + 0xc);
                  while (iVar8 != 0) {
                    FUN_2c53d79c(*(undefined4 *)(iVar8 + 0xc));
                    iVar7 = *(int *)(iVar8 + 8);
                    if (*(int *)(iVar8 + 0x14) != iVar8 + 0x1c) {
                    /* WARNING: Subroutine does not return */
                      FUN_2c472680(0);
                    }
                    thunk_FUN_2c669588(iVar8,0x2c);
                    iVar8 = iVar7;
                  }
                  iVar8 = *(int *)(iVar9 + 8);
                  if (*(int *)(iVar9 + 0x14) != iVar9 + 0x1c) {
                    /* WARNING: Subroutine does not return */
                    FUN_2c472680(0);
                  }
                  thunk_FUN_2c669588(iVar9,0x2c);
                  iVar9 = iVar8;
                }
                iVar9 = *(int *)(iVar6 + 8);
                if (*(int *)(iVar6 + 0x14) != iVar6 + 0x1c) {
                    /* WARNING: Subroutine does not return */
                  FUN_2c472680(0);
                }
                thunk_FUN_2c669588(iVar6,0x2c);
                iVar6 = iVar9;
              }
              iVar6 = *(int *)(iVar5 + 8);
              if (*(int *)(iVar5 + 0x14) != iVar5 + 0x1c) {
                    /* WARNING: Subroutine does not return */
                FUN_2c472680(0);
              }
              thunk_FUN_2c669588(iVar5,0x2c);
              iVar5 = iVar6;
            }
            iVar5 = *(int *)(iVar1 + 8);
            if (*(int *)(iVar1 + 0x14) != iVar1 + 0x1c) {
                    /* WARNING: Subroutine does not return */
              FUN_2c472680(0);
            }
            thunk_FUN_2c669588(iVar1,0x2c);
            iVar1 = iVar5;
          }
          iVar1 = *(int *)(iVar2 + 8);
          if (*(int *)(iVar2 + 0x14) != iVar2 + 0x1c) {
                    /* WARNING: Subroutine does not return */
            FUN_2c472680(0);
          }
          thunk_FUN_2c669588(iVar2,0x2c);
          iVar2 = iVar1;
        }
        iVar2 = *(int *)(iVar3 + 8);
        if (*(int *)(iVar3 + 0x14) != iVar3 + 0x1c) {
                    /* WARNING: Subroutine does not return */
          FUN_2c472680(0);
        }
        thunk_FUN_2c669588(iVar3,0x2c);
        iVar3 = iVar2;
      }
      iVar3 = *(int *)(iVar4 + 8);
      if (*(int *)(iVar4 + 0x14) != iVar4 + 0x1c) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      thunk_FUN_2c669588(iVar4,0x2c);
      iVar4 = iVar3;
    }
    iVar4 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 0x14) != param_1 + 0x1c) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    thunk_FUN_2c669588(param_1,0x2c);
    param_1 = iVar4;
  } while( true );
}

