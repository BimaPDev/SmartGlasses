/* FUN_2c6221cc @ 0x2c6221cc */

void FUN_2c6221cc(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int *local_50;
  int *local_4c;
  int *local_48;
  
  local_48 = (int *)(param_1 + -4);
  do {
    local_48 = local_48 + 1;
    iVar1 = *local_48;
    if (iVar1 != 0) {
      local_4c = (int *)(iVar1 + -4);
      do {
        local_4c = local_4c + 1;
        iVar2 = *local_4c;
        if (iVar2 != 0) {
          local_50 = (int *)(iVar2 + -4);
          do {
            local_50 = local_50 + 1;
            iVar3 = *local_50;
            if (iVar3 != 0) {
              piVar10 = (int *)(iVar3 + -4);
              do {
                piVar10 = piVar10 + 1;
                iVar4 = *piVar10;
                if (iVar4 != 0) {
                  piVar8 = (int *)(iVar4 + -4);
                  do {
                    piVar8 = piVar8 + 1;
                    iVar5 = *piVar8;
                    if (iVar5 != 0) {
                      piVar12 = (int *)(iVar5 + -4);
                      do {
                        piVar12 = piVar12 + 1;
                        iVar6 = *piVar12;
                        if (iVar6 != 0) {
                          piVar13 = (int *)(iVar6 + -4);
                          do {
                            piVar13 = piVar13 + 1;
                            iVar7 = *piVar13;
                            if (iVar7 != 0) {
                              piVar11 = (int *)(iVar7 + -4);
                              do {
                                piVar11 = piVar11 + 1;
                                iVar9 = *piVar11;
                                if (iVar9 != 0) {
                                  piVar14 = (int *)(iVar9 + -4);
                                  do {
                                    piVar14 = piVar14 + 1;
                                    if (*piVar14 != 0) {
                                      FUN_2c6221cc();
                                      FUN_2c62bea8(*piVar14);
                                    }
                                  } while (piVar14 != (int *)(iVar9 + 0x3c));
                                  FUN_2c62bea8(*piVar11);
                                }
                              } while (piVar11 != (int *)(iVar7 + 0x3c));
                              FUN_2c62bea8(*piVar13);
                            }
                          } while ((int *)(iVar6 + 0x3c) != piVar13);
                          FUN_2c62bea8(*piVar12);
                        }
                      } while ((int *)(iVar5 + 0x3c) != piVar12);
                      FUN_2c62bea8(*piVar8);
                    }
                  } while (piVar8 != (int *)(iVar4 + 0x3c));
                  FUN_2c62bea8(*piVar10);
                }
              } while (piVar10 != (int *)(iVar3 + 0x3c));
              FUN_2c62bea8(*local_50);
            }
          } while (local_50 != (int *)(iVar2 + 0x3c));
          FUN_2c62bea8(*local_4c);
        }
      } while (local_4c != (int *)(iVar1 + 0x3c));
      FUN_2c62bea8(*local_48);
    }
  } while (local_48 != (int *)(param_1 + 0x3c));
  return;
}

